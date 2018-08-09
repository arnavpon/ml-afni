# Bhim Pipeline Container
# Morey Lab
# Automated Build - Step 2

FROM arnavpon/moreylab-mrtrix
LABEL description="Ubuntu 17.10 OS & MRtrix3 base image + AFNI installation"
LABEL maintainer="Arnav Pondicherry <arnavpon@rwjms.rutgers.edu>"

# (1) Install AFNI (& its dependencies)
#   - software-properties-common pkg required for `add-apt-repository` command to work
#   - libssl-dev & r-cran-curl aren't in AFNI install instructions, but process fails without them
#   - in final step, create symbolic link between libgsl.so.19 and .23 for SkullStripping
RUN echo "Installing AFNI & its dependencies..." && echo && \
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
	echo && echo "Setting up AFNI config..." && echo && \
	cp $HOME/abin/AFNI.afnirc $HOME/.afnirc && \
	echo && echo "Downloading and installing CD library..." && echo && \
	curl -O https://afni.nimh.nih.gov/pub/dist/edu/data/CD.tgz && \
	tar xvzf CD.tgz && cd CD && tcsh s2.cp.files . ~ && cd .. && rm CD.tgz && \
	ln -s /usr/lib/x86_64-linux-gnu/libgsl.so.23 /usr/lib/x86_64-linux-gnu/libgsl.so.19

# (3) Add ~/abin to PATH (for tcsh)
ENV PATH=/root/abin:$PATH

# (4) Start up tcsh
CMD ["tcsh"]
