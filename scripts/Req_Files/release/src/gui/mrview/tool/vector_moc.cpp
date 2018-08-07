/****************************************************************************
** Meta object code from reading C++ file 'vector.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/mrview/tool/vector.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MR__GUI__MRView__Tool__Vector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x08,
      49,   30,   30,   30, 0x08,
      70,   68,   30,   30, 0x08,
     113,   30,   30,   30, 0x08,
     129,   30,   30,   30, 0x08,
     159,  148,   30,   30, 0x08,
     186,  148,   30,   30, 0x08,
     222,  214,   30,   30, 0x08,
     250,  240,   30,   30, 0x08,
     275,   30,   30,   30, 0x08,
     300,   30,   30,   30, 0x08,
     322,   68,   30,   30, 0x08,
     376,   30,   30,   30, 0x08,
     401,   30,   30,   30, 0x08,
     430,  423,   30,   30, 0x08,
     459,  423,   30,   30, 0x08,
     488,   30,   30,   30, 0x08,
     520,   30,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MR__GUI__MRView__Tool__Vector[] = {
    "MR::GUI::MRView::Tool::Vector\0\0"
    "fixel_open_slot()\0fixel_close_slot()\0"
    ",\0toggle_shown_slot(QModelIndex,QModelIndex)\0"
    "hide_all_slot()\0update_selection()\0"
    "is_checked\0on_lock_to_grid_slot(bool)\0"
    "on_crop_to_slice_slot(bool)\0opacity\0"
    "opacity_slot(int)\0thickness\0"
    "line_thickness_slot(int)\0"
    "length_multiplier_slot()\0length_type_slot(int)\0"
    "selection_changed_slot(QItemSelection,QItemSelection)\0"
    "colour_changed_slot(int)\0on_set_scaling_slot()\0"
    "unused\0threshold_lower_changed(int)\0"
    "threshold_upper_changed(int)\0"
    "threshold_lower_value_changed()\0"
    "threshold_upper_value_changed()\0"
};

void MR::GUI::MRView::Tool::Vector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Vector *_t = static_cast<Vector *>(_o);
        switch (_id) {
        case 0: _t->fixel_open_slot(); break;
        case 1: _t->fixel_close_slot(); break;
        case 2: _t->toggle_shown_slot((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 3: _t->hide_all_slot(); break;
        case 4: _t->update_selection(); break;
        case 5: _t->on_lock_to_grid_slot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_crop_to_slice_slot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->opacity_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->line_thickness_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->length_multiplier_slot(); break;
        case 10: _t->length_type_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->selection_changed_slot((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 12: _t->colour_changed_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_set_scaling_slot(); break;
        case 14: _t->threshold_lower_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->threshold_upper_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->threshold_lower_value_changed(); break;
        case 17: _t->threshold_upper_value_changed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MR::GUI::MRView::Tool::Vector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MR::GUI::MRView::Tool::Vector::staticMetaObject = {
    { &Base::staticMetaObject, qt_meta_stringdata_MR__GUI__MRView__Tool__Vector,
      qt_meta_data_MR__GUI__MRView__Tool__Vector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MR::GUI::MRView::Tool::Vector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MR::GUI::MRView::Tool::Vector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MR::GUI::MRView::Tool::Vector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MR__GUI__MRView__Tool__Vector))
        return static_cast<void*>(const_cast< Vector*>(this));
    if (!strcmp(_clname, "ColourMapButtonObserver"))
        return static_cast< ColourMapButtonObserver*>(const_cast< Vector*>(this));
    if (!strcmp(_clname, "DisplayableVisitor"))
        return static_cast< DisplayableVisitor*>(const_cast< Vector*>(this));
    return Base::qt_metacast(_clname);
}

int MR::GUI::MRView::Tool::Vector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Base::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
