/****************************************************************************
** Meta object code from reading C++ file 'tractography.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/gui/mrview/tool/tractography/tractography.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tractography.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MR__GUI__MRView__Tool__Tractography[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      37,   36,   36,   36, 0x08,
      60,   36,   36,   36, 0x08,
      86,   84,   36,   36, 0x08,
     129,   36,   36,   36, 0x08,
     145,   36,   36,   36, 0x08,
     181,  170,   36,   36, 0x08,
     208,  170,   36,   36, 0x08,
     235,   36,   36,   36, 0x08,
     266,  258,   36,   36, 0x08,
     294,  284,   36,   36, 0x08,
     323,  319,   36,   36, 0x08,
     353,   36,   36,   36, 0x08,
     386,   36,   36,   36, 0x08,
     414,   36,   36,   36, 0x08,
     444,   36,   36,   36, 0x08,
     468,   36,   36,   36, 0x08,
     497,   36,   36,   36, 0x08,
     529,   36,   36,   36, 0x08,
     550,   84,   36,   36, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MR__GUI__MRView__Tool__Tractography[] = {
    "MR::GUI::MRView::Tool::Tractography\0"
    "\0tractogram_open_slot()\0tractogram_close_slot()\0"
    ",\0toggle_shown_slot(QModelIndex,QModelIndex)\0"
    "hide_all_slot()\0on_slab_thickness_slot()\0"
    "is_checked\0on_crop_to_slab_slot(bool)\0"
    "on_use_lighting_slot(bool)\0"
    "on_lighting_settings()\0opacity\0"
    "opacity_slot(int)\0thickness\0"
    "line_thickness_slot(int)\0pos\0"
    "right_click_menu_slot(QPoint)\0"
    "colour_track_by_direction_slot()\0"
    "colour_track_by_ends_slot()\0"
    "randomise_track_colour_slot()\0"
    "set_track_colour_slot()\0"
    "colour_by_scalar_file_slot()\0"
    "colour_mode_selection_slot(int)\0"
    "colour_button_slot()\0"
    "selection_changed_slot(QItemSelection,QItemSelection)\0"
};

void MR::GUI::MRView::Tool::Tractography::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Tractography *_t = static_cast<Tractography *>(_o);
        switch (_id) {
        case 0: _t->tractogram_open_slot(); break;
        case 1: _t->tractogram_close_slot(); break;
        case 2: _t->toggle_shown_slot((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 3: _t->hide_all_slot(); break;
        case 4: _t->on_slab_thickness_slot(); break;
        case 5: _t->on_crop_to_slab_slot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_use_lighting_slot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_lighting_settings(); break;
        case 8: _t->opacity_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->line_thickness_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->right_click_menu_slot((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 11: _t->colour_track_by_direction_slot(); break;
        case 12: _t->colour_track_by_ends_slot(); break;
        case 13: _t->randomise_track_colour_slot(); break;
        case 14: _t->set_track_colour_slot(); break;
        case 15: _t->colour_by_scalar_file_slot(); break;
        case 16: _t->colour_mode_selection_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->colour_button_slot(); break;
        case 18: _t->selection_changed_slot((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MR::GUI::MRView::Tool::Tractography::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MR::GUI::MRView::Tool::Tractography::staticMetaObject = {
    { &Base::staticMetaObject, qt_meta_stringdata_MR__GUI__MRView__Tool__Tractography,
      qt_meta_data_MR__GUI__MRView__Tool__Tractography, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MR::GUI::MRView::Tool::Tractography::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MR::GUI::MRView::Tool::Tractography::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MR::GUI::MRView::Tool::Tractography::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MR__GUI__MRView__Tool__Tractography))
        return static_cast<void*>(const_cast< Tractography*>(this));
    return Base::qt_metacast(_clname);
}

int MR::GUI::MRView::Tool::Tractography::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Base::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
