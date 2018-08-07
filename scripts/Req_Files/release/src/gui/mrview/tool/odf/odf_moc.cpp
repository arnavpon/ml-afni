/****************************************************************************
** Meta object code from reading C++ file 'odf.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/gui/mrview/tool/odf/odf.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'odf.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MR__GUI__MRView__Tool__ODF[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x08,
      46,   27,   27,   27, 0x08,
      61,   27,   27,   27, 0x08,
      80,   27,   27,   27, 0x08,
      98,   27,   27,   27, 0x08,
     117,   27,   27,   27, 0x08,
     137,   27,   27,   27, 0x08,
     155,  153,   27,   27, 0x08,
     209,   27,   27,   27, 0x08,
     224,   27,   27,   27, 0x08,
     236,   27,   27,   27, 0x08,
     249,   27,   27,   27, 0x08,
     276,  269,   27,   27, 0x08,
     306,  269,   27,   27, 0x08,
     337,   27,   27,   27, 0x08,
     358,  269,   27,   27, 0x08,
     381,  269,   27,   27, 0x08,
     410,   27,   27,   27, 0x08,
     421,   27,   27,   27, 0x08,
     438,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MR__GUI__MRView__Tool__ODF[] = {
    "MR::GUI::MRView::Tool::ODF\0\0"
    "onPreviewClosed()\0sh_open_slot()\0"
    "tensor_open_slot()\0dixel_open_slot()\0"
    "image_close_slot()\0show_preview_slot()\0"
    "hide_all_slot()\0,\0"
    "selection_changed_slot(QItemSelection,QItemSelection)\0"
    "lmax_slot(int)\0dirs_slot()\0shell_slot()\0"
    "adjust_scale_slot()\0unused\0"
    "colour_by_direction_slot(int)\0"
    "hide_negative_values_slot(int)\0"
    "colour_change_slot()\0use_lighting_slot(int)\0"
    "lighting_settings_slot(bool)\0updateGL()\0"
    "update_preview()\0close_event()\0"
};

void MR::GUI::MRView::Tool::ODF::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ODF *_t = static_cast<ODF *>(_o);
        switch (_id) {
        case 0: _t->onPreviewClosed(); break;
        case 1: _t->sh_open_slot(); break;
        case 2: _t->tensor_open_slot(); break;
        case 3: _t->dixel_open_slot(); break;
        case 4: _t->image_close_slot(); break;
        case 5: _t->show_preview_slot(); break;
        case 6: _t->hide_all_slot(); break;
        case 7: _t->selection_changed_slot((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 8: _t->lmax_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->dirs_slot(); break;
        case 10: _t->shell_slot(); break;
        case 11: _t->adjust_scale_slot(); break;
        case 12: _t->colour_by_direction_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->hide_negative_values_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->colour_change_slot(); break;
        case 15: _t->use_lighting_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->lighting_settings_slot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->updateGL(); break;
        case 18: _t->update_preview(); break;
        case 19: _t->close_event(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MR::GUI::MRView::Tool::ODF::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MR::GUI::MRView::Tool::ODF::staticMetaObject = {
    { &Base::staticMetaObject, qt_meta_stringdata_MR__GUI__MRView__Tool__ODF,
      qt_meta_data_MR__GUI__MRView__Tool__ODF, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MR::GUI::MRView::Tool::ODF::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MR::GUI::MRView::Tool::ODF::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MR::GUI::MRView::Tool::ODF::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MR__GUI__MRView__Tool__ODF))
        return static_cast<void*>(const_cast< ODF*>(this));
    return Base::qt_metacast(_clname);
}

int MR::GUI::MRView::Tool::ODF::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Base::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
