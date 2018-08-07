# Bhim Pipeline Container 
# Morey Lab
# VERSION 0.0.1

FROM ubuntu:17.10
LABEL description="Ubuntu OS with AFNI installation"
LABEL maintainer="Arnav Pondicherry <arnavpon@rwjms.rutgers.edu>"

# (1) Copy Bhim Pipeline Files to Image
COPY scripts /pipeline/

# (2) Install AFNI (& all dependencies)
#   - Note: separating these 2 build steps does NOT change final image size!
#   - software-properties-common pkg required for `add-apt-repository` command to work
#   - libssl-dev & r-cran-curl aren't in AFNI install instructions, but fails w/o them
#   - in final step, create symbolic link between libgsl.so.19 and .23 for SkullStripping
RUN echo && echo "Installing AFNI & its dependencies..." && echo && \
	apt-get update && apt-get install -y software-properties-common && \
	add-apt-repository universe && \
	apt-get install -y tcsh xfonts-base python-qt4    \
                        gsl-bin netpbm gnome-tweak-tool   \
                        libjpeg62 xvfb xterm vim curl     \
                        gedit evince                      \
                        libglu1-mesa-dev libglw1-mesa     \
                        libxm4 build-essential libcurl4-openssl-dev \
			libssl-dev r-cran-curl && \
	chsh -s /usr/bin/tcsh && \
	cd && \
	curl -O https://afni.nimh.nih.gov/pub/dist/bin/linux_ubuntu_16_64/@update.afni.binaries && \
	tcsh @update.afni.binaries -package linux_ubuntu_16_64  -do_extras && \
	export R_LIBS=$HOME/R && \
	mkdir $R_LIBS && \
	echo 'setenv R_LIBS ~/R' >> ~/.cshrc && \
	curl -O https://afni.nimh.nih.gov/pub/dist/src/scripts_src/@add_rcran_ubuntu.tcsh && \
	tcsh @add_rcran_ubuntu.tcsh && \
	export PATH=/root/abin:$PATH && \
	echo "Installing R Packages..." && \	
	rPkgsInstall -pkgs ALL && \
	echo "Setting up AFNI config..." && \
	cp $HOME/abin/AFNI.afnirc $HOME/.afnirc && \
	echo "Updating SUMA env..." && \
	suma -update_env && \
	echo "Downloading and installing CD..." && \
	curl -O https://afni.nimh.nih.gov/pub/dist/edu/data/CD.tgz && \
	tar xvzf CD.tgz && cd CD && tcsh s2.cp.files . ~ && cd .. && rm CD.tgz && \
	ln -s /usr/lib/x86_64-linux-gnu/libgsl.so.23 /usr/lib/x86_64-linux-gnu/libgsl.so.19

# (3) Add ~/abin to PATH (for tcsh)
ENV PATH=/root/abin:/mrtrix3/bin:$PATH

# (4) Change working directory -> /pipeline/
WORKDIR /pipeline

# (5) Start up tcsh - user can manually run `tcsh run.test subj_id`
CMD ["tcsh"]
