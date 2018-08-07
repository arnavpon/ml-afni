/****************************************************************************
** Meta object code from reading C++ file 'window.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/mrview/window.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MR__GUI__MRView__Window[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,
      40,   24,   24,   24, 0x05,
      56,   24,   24,   24, 0x05,
      71,   24,   24,   24, 0x05,
      86,   24,   24,   24, 0x05,
     107,   24,   24,   24, 0x05,
     128,   24,   24,   24, 0x05,
     142,   24,   24,   24, 0x05,
     157,   24,   24,   24, 0x05,
     186,   24,   24,   24, 0x05,
     203,   24,   24,   24, 0x05,
     225,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     252,   24,   24,   24, 0x0a,
     273,   24,   24,   24, 0x0a,
     284,   24,   24,   24, 0x08,
     302,   24,   24,   24, 0x08,
     328,   24,   24,   24, 0x08,
     346,   24,   24,   24, 0x08,
     365,   24,   24,   24, 0x08,
     396,  389,   24,   24, 0x08,
     423,  389,   24,   24, 0x08,
     456,  389,   24,   24, 0x08,
     483,  389,   24,   24, 0x08,
     511,   24,   24,   24, 0x08,
     526,   24,   24,   24, 0x08,
     542,   24,   24,   24, 0x08,
     564,   24,   24,   24, 0x08,
     583,   24,   24,   24, 0x08,
     609,   24,   24,   24, 0x08,
     630,   24,   24,   24, 0x08,
     648,   24,   24,   24, 0x08,
     666,   24,   24,   24, 0x08,
     688,   24,   24,   24, 0x08,
     706,   24,   24,   24, 0x08,
     728,   24,   24,   24, 0x08,
     753,   24,   24,   24, 0x08,
     782,   24,   24,   24, 0x08,
     813,   24,   24,   24, 0x08,
     848,   24,   24,   24, 0x08,
     867,   24,   24,   24, 0x08,
     892,  389,   24,   24, 0x08,
     920,   24,   24,   24, 0x08,
     938,   24,   24,   24, 0x08,
     963,   24,   24,   24, 0x08,
     977,   24,   24,   24, 0x08,
     990,   24,   24,   24, 0x08,
    1005,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MR__GUI__MRView__Window[] = {
    "MR::GUI::MRView::Window\0\0focusChanged()\0"
    "targetChanged()\0sliceChanged()\0"
    "planeChanged()\0orientationChanged()\0"
    "fieldOfViewChanged()\0modeChanged()\0"
    "imageChanged()\0imageVisibilityChanged(bool)\0"
    "scalingChanged()\0volumeChanged(size_t)\0"
    "volumeGroupChanged(size_t)\0"
    "on_scaling_changed()\0updateGL()\0"
    "image_open_slot()\0image_import_DICOM_slot()\0"
    "image_save_slot()\0image_close_slot()\0"
    "image_properties_slot()\0action\0"
    "select_mode_slot(QAction*)\0"
    "select_mouse_mode_slot(QAction*)\0"
    "select_tool_slot(QAction*)\0"
    "select_plane_slot(QAction*)\0zoom_in_slot()\0"
    "zoom_out_slot()\0invert_scaling_slot()\0"
    "full_screen_slot()\0toggle_annotations_slot()\0"
    "snap_to_image_slot()\0hide_image_slot()\0"
    "slice_next_slot()\0slice_previous_slot()\0"
    "image_next_slot()\0image_previous_slot()\0"
    "image_next_volume_slot()\0"
    "image_previous_volume_slot()\0"
    "image_next_volume_group_slot()\0"
    "image_previous_volume_group_slot()\0"
    "image_reset_slot()\0image_interpolate_slot()\0"
    "image_select_slot(QAction*)\0"
    "reset_view_slot()\0background_colour_slot()\0"
    "OpenGL_slot()\0about_slot()\0aboutQt_slot()\0"
    "process_commandline_options()\0"
};

void MR::GUI::MRView::Window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Window *_t = static_cast<Window *>(_o);
        switch (_id) {
        case 0: _t->focusChanged(); break;
        case 1: _t->targetChanged(); break;
        case 2: _t->sliceChanged(); break;
        case 3: _t->planeChanged(); break;
        case 4: _t->orientationChanged(); break;
        case 5: _t->fieldOfViewChanged(); break;
        case 6: _t->modeChanged(); break;
        case 7: _t->imageChanged(); break;
        case 8: _t->imageVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->scalingChanged(); break;
        case 10: _t->volumeChanged((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 11: _t->volumeGroupChanged((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 12: _t->on_scaling_changed(); break;
        case 13: _t->updateGL(); break;
        case 14: _t->image_open_slot(); break;
        case 15: _t->image_import_DICOM_slot(); break;
        case 16: _t->image_save_slot(); break;
        case 17: _t->image_close_slot(); break;
        case 18: _t->image_properties_slot(); break;
        case 19: _t->select_mode_slot((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 20: _t->select_mouse_mode_slot((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 21: _t->select_tool_slot((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 22: _t->select_plane_slot((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 23: _t->zoom_in_slot(); break;
        case 24: _t->zoom_out_slot(); break;
        case 25: _t->invert_scaling_slot(); break;
        case 26: _t->full_screen_slot(); break;
        case 27: _t->toggle_annotations_slot(); break;
        case 28: _t->snap_to_image_slot(); break;
        case 29: _t->hide_image_slot(); break;
        case 30: _t->slice_next_slot(); break;
        case 31: _t->slice_previous_slot(); break;
        case 32: _t->image_next_slot(); break;
        case 33: _t->image_previous_slot(); break;
        case 34: _t->image_next_volume_slot(); break;
        case 35: _t->image_previous_volume_slot(); break;
        case 36: _t->image_next_volume_group_slot(); break;
        case 37: _t->image_previous_volume_group_slot(); break;
        case 38: _t->image_reset_slot(); break;
        case 39: _t->image_interpolate_slot(); break;
        case 40: _t->image_select_slot((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 41: _t->reset_view_slot(); break;
        case 42: _t->background_colour_slot(); break;
        case 43: _t->OpenGL_slot(); break;
        case 44: _t->about_slot(); break;
        case 45: _t->aboutQt_slot(); break;
        case 46: _t->process_commandline_options(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MR::GUI::MRView::Window::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MR::GUI::MRView::Window::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MR__GUI__MRView__Window,
      qt_meta_data_MR__GUI__MRView__Window, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MR::GUI::MRView::Window::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MR::GUI::MRView::Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MR::GUI::MRView::Window::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MR__GUI__MRView__Window))
        return static_cast<void*>(const_cast< Window*>(this));
    if (!strcmp(_clname, "ColourMapButtonObserver"))
        return static_cast< ColourMapButtonObserver*>(const_cast< Window*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MR::GUI::MRView::Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    }
    return _id;
}

// SIGNAL 0
void MR::GUI::MRView::Window::focusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void MR::GUI::MRView::Window::targetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void MR::GUI::MRView::Window::sliceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void MR::GUI::MRView::Window::planeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void MR::GUI::MRView::Window::orientationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void MR::GUI::MRView::Window::fieldOfViewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void MR::GUI::MRView::Window::modeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void MR::GUI::MRView::Window::imageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void MR::GUI::MRView::Window::imageVisibilityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MR::GUI::MRView::Window::scalingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void MR::GUI::MRView::Window::volumeChanged(size_t _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MR::GUI::MRView::Window::volumeGroupChanged(size_t _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_END_MOC_NAMESPACE
