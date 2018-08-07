/****************************************************************************
** Meta object code from reading C++ file 'connectome.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/gui/mrview/tool/connectome/connectome.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectome.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MR__GUI__MRView__Tool__Connectome[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      35,   34,   34,   34, 0x08,
      53,   34,   34,   34, 0x08,
      69,   34,   34,   34, 0x08,
      88,   34,   34,   34, 0x08,
     110,  108,   34,   34, 0x08,
     175,   34,   34,   34, 0x08,
     211,   34,   34,   34, 0x08,
     245,   34,   34,   34, 0x08,
     277,   34,   34,   34, 0x08,
     307,   34,   34,   34, 0x08,
     338,   34,   34,   34, 0x08,
     380,   34,   34,   34, 0x08,
     413,   34,   34,   34, 0x08,
     434,   34,   34,   34, 0x08,
     459,   34,   34,   34, 0x08,
     497,   34,   34,   34, 0x08,
     529,   34,   34,   34, 0x08,
     558,   34,   34,   34, 0x08,
     594,   34,   34,   34, 0x08,
     617,   34,   34,   34, 0x08,
     644,   34,   34,   34, 0x08,
     681,   34,   34,   34, 0x08,
     708,   34,   34,   34, 0x08,
     736,   34,   34,   34, 0x08,
     772,   34,   34,   34, 0x08,
     806,   34,   34,   34, 0x08,
     838,   34,   34,   34, 0x08,
     868,   34,   34,   34, 0x08,
     899,   34,   34,   34, 0x08,
     932,   34,   34,   34, 0x08,
     955,   34,   34,   34, 0x08,
     981,   34,   34,   34, 0x08,
    1010,   34,   34,   34, 0x08,
    1033,   34,   34,   34, 0x08,
    1060,   34,   34,   34, 0x08,
    1087,   34,   34,   34, 0x08,
    1115,   34,   34,   34, 0x08,
    1131,   34,   34,   34, 0x08,
    1157,   34,   34,   34, 0x08,
    1182,   34,   34,   34, 0x08,
    1208,   34,   34,   34, 0x08,
    1238,   34,   34,   34, 0x08,
    1268,   34,   34,   34, 0x08,
    1290,   34,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MR__GUI__MRView__Tool__Connectome[] = {
    "MR::GUI::MRView::Tool::Connectome\0\0"
    "image_open_slot()\0hide_all_slot()\0"
    "matrix_open_slot()\0matrix_close_slot()\0"
    ",\0connectome_selection_changed_slot(QItemSelection,QItemSelection)\0"
    "node_visibility_selection_slot(int)\0"
    "node_geometry_selection_slot(int)\0"
    "node_colour_selection_slot(int)\0"
    "node_size_selection_slot(int)\0"
    "node_alpha_selection_slot(int)\0"
    "node_visibility_matrix_operator_slot(int)\0"
    "node_visibility_parameter_slot()\0"
    "sphere_lod_slot(int)\0overlay_interp_slot(int)\0"
    "node_colour_matrix_operator_slot(int)\0"
    "node_fixed_colour_change_slot()\0"
    "node_colour_parameter_slot()\0"
    "node_size_matrix_operator_slot(int)\0"
    "node_size_value_slot()\0"
    "node_size_parameter_slot()\0"
    "node_alpha_matrix_operator_slot(int)\0"
    "node_alpha_value_slot(int)\0"
    "node_alpha_parameter_slot()\0"
    "edge_visibility_selection_slot(int)\0"
    "edge_geometry_selection_slot(int)\0"
    "edge_colour_selection_slot(int)\0"
    "edge_size_selection_slot(int)\0"
    "edge_alpha_selection_slot(int)\0"
    "edge_visibility_parameter_slot()\0"
    "cylinder_lod_slot(int)\0edge_colour_change_slot()\0"
    "edge_colour_parameter_slot()\0"
    "edge_size_value_slot()\0"
    "edge_size_parameter_slot()\0"
    "edge_alpha_value_slot(int)\0"
    "edge_alpha_parameter_slot()\0lut_open_slot()\0"
    "lighting_change_slot(int)\0"
    "lighting_settings_slot()\0"
    "lighting_parameter_slot()\0"
    "crop_to_slab_toggle_slot(int)\0"
    "crop_to_slab_parameter_slot()\0"
    "show_node_list_slot()\0"
    "node_selection_settings_changed_slot()\0"
};

void MR::GUI::MRView::Tool::Connectome::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Connectome *_t = static_cast<Connectome *>(_o);
        switch (_id) {
        case 0: _t->image_open_slot(); break;
        case 1: _t->hide_all_slot(); break;
        case 2: _t->matrix_open_slot(); break;
        case 3: _t->matrix_close_slot(); break;
        case 4: _t->connectome_selection_changed_slot((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 5: _t->node_visibility_selection_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->node_geometry_selection_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->node_colour_selection_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->node_size_selection_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->node_alpha_selection_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->node_visibility_matrix_operator_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->node_visibility_parameter_slot(); break;
        case 12: _t->sphere_lod_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->overlay_interp_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->node_colour_matrix_operator_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->node_fixed_colour_change_slot(); break;
        case 16: _t->node_colour_parameter_slot(); break;
        case 17: _t->node_size_matrix_operator_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->node_size_value_slot(); break;
        case 19: _t->node_size_parameter_slot(); break;
        case 20: _t->node_alpha_matrix_operator_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->node_alpha_value_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->node_alpha_parameter_slot(); break;
        case 23: _t->edge_visibility_selection_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->edge_geometry_selection_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->edge_colour_selection_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->edge_size_selection_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->edge_alpha_selection_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->edge_visibility_parameter_slot(); break;
        case 29: _t->cylinder_lod_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->edge_colour_change_slot(); break;
        case 31: _t->edge_colour_parameter_slot(); break;
        case 32: _t->edge_size_value_slot(); break;
        case 33: _t->edge_size_parameter_slot(); break;
        case 34: _t->edge_alpha_value_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->edge_alpha_parameter_slot(); break;
        case 36: _t->lut_open_slot(); break;
        case 37: _t->lighting_change_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->lighting_settings_slot(); break;
        case 39: _t->lighting_parameter_slot(); break;
        case 40: _t->crop_to_slab_toggle_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->crop_to_slab_parameter_slot(); break;
        case 42: _t->show_node_list_slot(); break;
        case 43: _t->node_selection_settings_changed_slot(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MR::GUI::MRView::Tool::Connectome::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MR::GUI::MRView::Tool::Connectome::staticMetaObject = {
    { &Base::staticMetaObject, qt_meta_stringdata_MR__GUI__MRView__Tool__Connectome,
      qt_meta_data_MR__GUI__MRView__Tool__Connectome, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MR::GUI::MRView::Tool::Connectome::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MR::GUI::MRView::Tool::Connectome::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MR::GUI::MRView::Tool::Connectome::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MR__GUI__MRView__Tool__Connectome))
        return static_cast<void*>(const_cast< Connectome*>(this));
    return Base::qt_metacast(_clname);
}

int MR::GUI::MRView::Tool::Connectome::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Base::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
