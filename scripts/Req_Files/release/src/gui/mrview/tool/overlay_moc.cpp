/****************************************************************************
** Meta object code from reading C++ file 'overlay.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/mrview/tool/overlay.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overlay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MR__GUI__MRView__Tool__Overlay[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   31,   31,   31, 0x08,
      50,   31,   31,   31, 0x08,
      69,   31,   31,   31, 0x08,
      87,   85,   31,   31, 0x08,
     130,   85,   31,   31, 0x08,
     184,   31,   31,   31, 0x08,
     214,   31,   31,   31, 0x08,
     241,  234,   31,   31, 0x08,
     258,   31,   31,   31, 0x08,
     275,  234,   31,   31, 0x08,
     304,  234,   31,   31, 0x08,
     333,   31,   31,   31, 0x08,
     365,   31,   31,   31, 0x08,
     397,  234,   31,   31, 0x08,
     418,   31,   31,   31, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MR__GUI__MRView__Tool__Overlay[] = {
    "MR::GUI::MRView::Tool::Overlay\0\0"
    "image_open_slot()\0image_close_slot()\0"
    "hide_all_slot()\0,\0"
    "toggle_shown_slot(QModelIndex,QModelIndex)\0"
    "selection_changed_slot(QItemSelection,QItemSelection)\0"
    "right_click_menu_slot(QPoint)\0"
    "volume_changed(int)\0unused\0update_slot(int)\0"
    "values_changed()\0upper_threshold_changed(int)\0"
    "lower_threshold_changed(int)\0"
    "upper_threshold_value_changed()\0"
    "lower_threshold_value_changed()\0"
    "opacity_changed(int)\0interpolate_changed()\0"
};

void MR::GUI::MRView::Tool::Overlay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Overlay *_t = static_cast<Overlay *>(_o);
        switch (_id) {
        case 0: _t->image_open_slot(); break;
        case 1: _t->image_close_slot(); break;
        case 2: _t->hide_all_slot(); break;
        case 3: _t->toggle_shown_slot((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 4: _t->selection_changed_slot((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 5: _t->right_click_menu_slot((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->volume_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->update_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->values_changed(); break;
        case 9: _t->upper_threshold_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->lower_threshold_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->upper_threshold_value_changed(); break;
        case 12: _t->lower_threshold_value_changed(); break;
        case 13: _t->opacity_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->interpolate_changed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MR::GUI::MRView::Tool::Overlay::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MR::GUI::MRView::Tool::Overlay::staticMetaObject = {
    { &Base::staticMetaObject, qt_meta_stringdata_MR__GUI__MRView__Tool__Overlay,
      qt_meta_data_MR__GUI__MRView__Tool__Overlay, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MR::GUI::MRView::Tool::Overlay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MR::GUI::MRView::Tool::Overlay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MR::GUI::MRView::Tool::Overlay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MR__GUI__MRView__Tool__Overlay))
        return static_cast<void*>(const_cast< Overlay*>(this));
    if (!strcmp(_clname, "ColourMapButtonObserver"))
        return static_cast< ColourMapButtonObserver*>(const_cast< Overlay*>(this));
    if (!strcmp(_clname, "DisplayableVisitor"))
        return static_cast< DisplayableVisitor*>(const_cast< Overlay*>(this));
    return Base::qt_metacast(_clname);
}

int MR::GUI::MRView::Tool::Overlay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Base::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
