/****************************************************************************
** Meta object code from reading C++ file 'track_scalar_file.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/gui/mrview/tool/tractography/track_scalar_file.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'track_scalar_file.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MR__GUI__MRView__Tool__TrackScalarFileOptions[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      52,   46,   47,   46, 0x0a,
      92,   46,   46,   46, 0x08,
     115,   46,   46,   46, 0x08,
     139,   46,   46,   46, 0x08,
     161,   46,   47,   46, 0x08,
     200,  193,   46,   46, 0x08,
     229,  193,   46,   46, 0x08,
     258,   46,   46,   46, 0x08,
     290,   46,   46,   46, 0x08,
     322,   46,   46,   46, 0x08,
     346,   46,   46,   46, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MR__GUI__MRView__Tool__TrackScalarFileOptions[] = {
    "MR::GUI::MRView::Tool::TrackScalarFileOptions\0"
    "\0bool\0open_intensity_track_scalar_file_slot()\0"
    "show_colour_bar_slot()\0select_colourmap_slot()\0"
    "on_set_scaling_slot()\0"
    "threshold_scalar_file_slot(int)\0unused\0"
    "threshold_lower_changed(int)\0"
    "threshold_upper_changed(int)\0"
    "threshold_lower_value_changed()\0"
    "threshold_upper_value_changed()\0"
    "invert_colourmap_slot()\0reset_intensity_slot()\0"
};

void MR::GUI::MRView::Tool::TrackScalarFileOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TrackScalarFileOptions *_t = static_cast<TrackScalarFileOptions *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->open_intensity_track_scalar_file_slot();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->show_colour_bar_slot(); break;
        case 2: _t->select_colourmap_slot(); break;
        case 3: _t->on_set_scaling_slot(); break;
        case 4: { bool _r = _t->threshold_scalar_file_slot((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->threshold_lower_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->threshold_upper_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->threshold_lower_value_changed(); break;
        case 8: _t->threshold_upper_value_changed(); break;
        case 9: _t->invert_colourmap_slot(); break;
        case 10: _t->reset_intensity_slot(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MR::GUI::MRView::Tool::TrackScalarFileOptions::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MR::GUI::MRView::Tool::TrackScalarFileOptions::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_MR__GUI__MRView__Tool__TrackScalarFileOptions,
      qt_meta_data_MR__GUI__MRView__Tool__TrackScalarFileOptions, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MR::GUI::MRView::Tool::TrackScalarFileOptions::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MR::GUI::MRView::Tool::TrackScalarFileOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MR::GUI::MRView::Tool::TrackScalarFileOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MR__GUI__MRView__Tool__TrackScalarFileOptions))
        return static_cast<void*>(const_cast< TrackScalarFileOptions*>(this));
    if (!strcmp(_clname, "DisplayableVisitor"))
        return static_cast< DisplayableVisitor*>(const_cast< TrackScalarFileOptions*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int MR::GUI::MRView::Tool::TrackScalarFileOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
