/****************************************************************************
** Meta object code from reading C++ file 'view.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/mrview/tool/view.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MR__GUI__MRView__Tool__View[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x08,
      46,   28,   28,   28, 0x08,
      77,   28,   28,   28, 0x08,
     100,   94,   28,   28, 0x08,
     129,   94,   28,   28, 0x08,
     158,   28,   28,   28, 0x08,
     173,   28,   28,   28, 0x08,
     186,   28,   28,   28, 0x08,
     199,   94,   28,   28, 0x08,
     221,   94,   28,   28, 0x08,
     243,   28,   28,   28, 0x08,
     266,  260,   28,   28, 0x08,
     282,   28,   28,   28, 0x08,
     297,   28,   28,   28, 0x08,
     316,   28,   28,   28, 0x08,
     336,   28,   28,   28, 0x08,
     347,   28,   28,   28, 0x08,
     370,   28,   28,   28, 0x08,
     391,  386,   28,   28, 0x08,
     417,  413,   28,   28, 0x08,
     459,   28,   28,   28, 0x08,
     496,   28,   28,   28, 0x08,
     528,   28,   28,   28, 0x08,
     564,   28,   28,   28, 0x08,
     607,   28,   28,   28, 0x08,
     636,   28,   28,   28, 0x08,
     668,   28,   28,   28, 0x08,
     699,   28,   28,   28, 0x08,
     730,   28,   28,   28, 0x08,
     764,   28,   28,   28, 0x08,
     797,   28,   28,   28, 0x08,
     823,   28,   28,   28, 0x08,
     849,   28,   28,   28, 0x08,
     874,   28,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MR__GUI__MRView__Tool__View[] = {
    "MR::GUI::MRView::Tool::View\0\0"
    "onImageChanged()\0onImageVisibilityChanged(bool)\0"
    "onFocusChanged()\0value\0"
    "onVolumeIndexChanged(size_t)\0"
    "onVolumeGroupChanged(size_t)\0"
    "onFOVChanged()\0onSetFocus()\0onSetVoxel()\0"
    "onSetVolumeIndex(int)\0onSetVolumeGroup(int)\0"
    "onPlaneChanged()\0index\0onSetPlane(int)\0"
    "onSetScaling()\0onScalingChanged()\0"
    "onSetTransparency()\0onSetFOV()\0"
    "onCheckThreshold(bool)\0onModeChanged()\0"
    "flag\0hide_image_slot(bool)\0pos\0"
    "clip_planes_right_click_menu_slot(QPoint)\0"
    "clip_planes_selection_changed_slot()\0"
    "clip_planes_toggle_shown_slot()\0"
    "clip_planes_toggle_highlight_slot()\0"
    "clip_planes_toggle_intersectionmode_slot()\0"
    "clip_planes_add_axial_slot()\0"
    "clip_planes_add_sagittal_slot()\0"
    "clip_planes_add_coronal_slot()\0"
    "clip_planes_reset_axial_slot()\0"
    "clip_planes_reset_sagittal_slot()\0"
    "clip_planes_reset_coronal_slot()\0"
    "clip_planes_invert_slot()\0"
    "clip_planes_remove_slot()\0"
    "clip_planes_clear_slot()\0"
    "light_box_slice_inc_reset_slot()\0"
};

void MR::GUI::MRView::Tool::View::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        View *_t = static_cast<View *>(_o);
        switch (_id) {
        case 0: _t->onImageChanged(); break;
        case 1: _t->onImageVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onFocusChanged(); break;
        case 3: _t->onVolumeIndexChanged((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 4: _t->onVolumeGroupChanged((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 5: _t->onFOVChanged(); break;
        case 6: _t->onSetFocus(); break;
        case 7: _t->onSetVoxel(); break;
        case 8: _t->onSetVolumeIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onSetVolumeGroup((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->onPlaneChanged(); break;
        case 11: _t->onSetPlane((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->onSetScaling(); break;
        case 13: _t->onScalingChanged(); break;
        case 14: _t->onSetTransparency(); break;
        case 15: _t->onSetFOV(); break;
        case 16: _t->onCheckThreshold((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->onModeChanged(); break;
        case 18: _t->hide_image_slot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->clip_planes_right_click_menu_slot((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 20: _t->clip_planes_selection_changed_slot(); break;
        case 21: _t->clip_planes_toggle_shown_slot(); break;
        case 22: _t->clip_planes_toggle_highlight_slot(); break;
        case 23: _t->clip_planes_toggle_intersectionmode_slot(); break;
        case 24: _t->clip_planes_add_axial_slot(); break;
        case 25: _t->clip_planes_add_sagittal_slot(); break;
        case 26: _t->clip_planes_add_coronal_slot(); break;
        case 27: _t->clip_planes_reset_axial_slot(); break;
        case 28: _t->clip_planes_reset_sagittal_slot(); break;
        case 29: _t->clip_planes_reset_coronal_slot(); break;
        case 30: _t->clip_planes_invert_slot(); break;
        case 31: _t->clip_planes_remove_slot(); break;
        case 32: _t->clip_planes_clear_slot(); break;
        case 33: _t->light_box_slice_inc_reset_slot(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MR::GUI::MRView::Tool::View::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MR::GUI::MRView::Tool::View::staticMetaObject = {
    { &Base::staticMetaObject, qt_meta_stringdata_MR__GUI__MRView__Tool__View,
      qt_meta_data_MR__GUI__MRView__Tool__View, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MR::GUI::MRView::Tool::View::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MR::GUI::MRView::Tool::View::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MR::GUI::MRView::Tool::View::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MR__GUI__MRView__Tool__View))
        return static_cast<void*>(const_cast< View*>(this));
    if (!strcmp(_clname, "Mode::ModeGuiVisitor"))
        return static_cast< Mode::ModeGuiVisitor*>(const_cast< View*>(this));
    return Base::qt_metacast(_clname);
}

int MR::GUI::MRView::Tool::View::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Base::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
