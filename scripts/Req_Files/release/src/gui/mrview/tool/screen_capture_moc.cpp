/****************************************************************************
** Meta object code from reading C++ file 'screen_capture.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/mrview/tool/screen_capture.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screen_capture.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MR__GUI__MRView__Tool__Capture[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   31,   31,   31, 0x08,
      51,   31,   31,   31, 0x08,
      73,   31,   31,   31, 0x08,
      98,   31,   31,   31, 0x08,
     118,   31,   31,   31, 0x08,
     138,   31,   31,   31, 0x08,
     155,   31,   31,   31, 0x08,
     183,   31,   31,   31, 0x08,
     202,   31,   31,   31, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MR__GUI__MRView__Tool__Capture[] = {
    "MR::GUI::MRView::Tool::Capture\0\0"
    "on_image_changed()\0on_rotation_type(int)\0"
    "on_translation_type(int)\0on_screen_capture()\0"
    "on_screen_preview()\0on_screen_stop()\0"
    "select_output_folder_slot()\0"
    "on_output_update()\0on_restore_capture_state()\0"
};

void MR::GUI::MRView::Tool::Capture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Capture *_t = static_cast<Capture *>(_o);
        switch (_id) {
        case 0: _t->on_image_changed(); break;
        case 1: _t->on_rotation_type((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_translation_type((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_screen_capture(); break;
        case 4: _t->on_screen_preview(); break;
        case 5: _t->on_screen_stop(); break;
        case 6: _t->select_output_folder_slot(); break;
        case 7: _t->on_output_update(); break;
        case 8: _t->on_restore_capture_state(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MR::GUI::MRView::Tool::Capture::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MR::GUI::MRView::Tool::Capture::staticMetaObject = {
    { &Base::staticMetaObject, qt_meta_stringdata_MR__GUI__MRView__Tool__Capture,
      qt_meta_data_MR__GUI__MRView__Tool__Capture, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MR::GUI::MRView::Tool::Capture::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MR::GUI::MRView::Tool::Capture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MR::GUI::MRView::Tool::Capture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MR__GUI__MRView__Tool__Capture))
        return static_cast<void*>(const_cast< Capture*>(this));
    return Base::qt_metacast(_clname);
}

int MR::GUI::MRView::Tool::Capture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Base::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
