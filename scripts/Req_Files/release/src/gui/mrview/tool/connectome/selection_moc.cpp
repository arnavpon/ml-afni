/****************************************************************************
** Meta object code from reading C++ file 'selection.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/gui/mrview/tool/connectome/selection.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MR__GUI__MRView__Tool__NodeSelectionSettings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      46,   45,   45,   45, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_MR__GUI__MRView__Tool__NodeSelectionSettings[] = {
    "MR::GUI::MRView::Tool::NodeSelectionSettings\0"
    "\0dataChanged()\0"
};

void MR::GUI::MRView::Tool::NodeSelectionSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NodeSelectionSettings *_t = static_cast<NodeSelectionSettings *>(_o);
        switch (_id) {
        case 0: _t->dataChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MR::GUI::MRView::Tool::NodeSelectionSettings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MR::GUI::MRView::Tool::NodeSelectionSettings::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MR__GUI__MRView__Tool__NodeSelectionSettings,
      qt_meta_data_MR__GUI__MRView__Tool__NodeSelectionSettings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MR::GUI::MRView::Tool::NodeSelectionSettings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MR::GUI::MRView::Tool::NodeSelectionSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MR::GUI::MRView::Tool::NodeSelectionSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MR__GUI__MRView__Tool__NodeSelectionSettings))
        return static_cast<void*>(const_cast< NodeSelectionSettings*>(this));
    return QObject::qt_metacast(_clname);
}

int MR::GUI::MRView::Tool::NodeSelectionSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void MR::GUI::MRView::Tool::NodeSelectionSettings::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_MR__GUI__MRView__Tool__NodeSelectionSettingsFrame[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      51,   50,   50,   50, 0x09,
      83,   50,   50,   50, 0x09,
     116,   50,   50,   50, 0x09,
     144,   50,   50,   50, 0x09,
     170,   50,   50,   50, 0x09,
     197,   50,   50,   50, 0x09,
     229,   50,   50,   50, 0x09,
     262,   50,   50,   50, 0x09,
     290,   50,   50,   50, 0x09,
     316,   50,   50,   50, 0x09,
     343,   50,   50,   50, 0x09,
     378,   50,   50,   50, 0x09,
     408,   50,   50,   50, 0x09,
     436,   50,   50,   50, 0x09,
     465,   50,   50,   50, 0x09,
     500,   50,   50,   50, 0x09,
     530,   50,   50,   50, 0x09,
     558,   50,   50,   50, 0x09,
     587,   50,   50,   50, 0x09,
     616,   50,   50,   50, 0x09,
     646,   50,   50,   50, 0x09,
     671,   50,   50,   50, 0x09,
     694,   50,   50,   50, 0x09,
     718,   50,   50,   50, 0x09,
     747,   50,   50,   50, 0x09,
     777,   50,   50,   50, 0x09,
     802,   50,   50,   50, 0x09,
     825,   50,   50,   50, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MR__GUI__MRView__Tool__NodeSelectionSettingsFrame[] = {
    "MR::GUI::MRView::Tool::NodeSelectionSettingsFrame\0"
    "\0node_selected_visibility_slot()\0"
    "node_selected_colour_fade_slot()\0"
    "node_selected_colour_slot()\0"
    "node_selected_size_slot()\0"
    "node_selected_alpha_slot()\0"
    "edge_selected_visibility_slot()\0"
    "edge_selected_colour_fade_slot()\0"
    "edge_selected_colour_slot()\0"
    "edge_selected_size_slot()\0"
    "edge_selected_alpha_slot()\0"
    "node_associated_colour_fade_slot()\0"
    "node_associated_colour_slot()\0"
    "node_associated_size_slot()\0"
    "node_associated_alpha_slot()\0"
    "edge_associated_colour_fade_slot()\0"
    "edge_associated_colour_slot()\0"
    "edge_associated_size_slot()\0"
    "edge_associated_alpha_slot()\0"
    "node_other_visibility_slot()\0"
    "node_other_colour_fade_slot()\0"
    "node_other_colour_slot()\0"
    "node_other_size_slot()\0node_other_alpha_slot()\0"
    "edge_other_visibility_slot()\0"
    "edge_other_colour_fade_slot()\0"
    "edge_other_colour_slot()\0"
    "edge_other_size_slot()\0edge_other_alpha_slot()\0"
};

void MR::GUI::MRView::Tool::NodeSelectionSettingsFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NodeSelectionSettingsFrame *_t = static_cast<NodeSelectionSettingsFrame *>(_o);
        switch (_id) {
        case 0: _t->node_selected_visibility_slot(); break;
        case 1: _t->node_selected_colour_fade_slot(); break;
        case 2: _t->node_selected_colour_slot(); break;
        case 3: _t->node_selected_size_slot(); break;
        case 4: _t->node_selected_alpha_slot(); break;
        case 5: _t->edge_selected_visibility_slot(); break;
        case 6: _t->edge_selected_colour_fade_slot(); break;
        case 7: _t->edge_selected_colour_slot(); break;
        case 8: _t->edge_selected_size_slot(); break;
        case 9: _t->edge_selected_alpha_slot(); break;
        case 10: _t->node_associated_colour_fade_slot(); break;
        case 11: _t->node_associated_colour_slot(); break;
        case 12: _t->node_associated_size_slot(); break;
        case 13: _t->node_associated_alpha_slot(); break;
        case 14: _t->edge_associated_colour_fade_slot(); break;
        case 15: _t->edge_associated_colour_slot(); break;
        case 16: _t->edge_associated_size_slot(); break;
        case 17: _t->edge_associated_alpha_slot(); break;
        case 18: _t->node_other_visibility_slot(); break;
        case 19: _t->node_other_colour_fade_slot(); break;
        case 20: _t->node_other_colour_slot(); break;
        case 21: _t->node_other_size_slot(); break;
        case 22: _t->node_other_alpha_slot(); break;
        case 23: _t->edge_other_visibility_slot(); break;
        case 24: _t->edge_other_colour_fade_slot(); break;
        case 25: _t->edge_other_colour_slot(); break;
        case 26: _t->edge_other_size_slot(); break;
        case 27: _t->edge_other_alpha_slot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MR::GUI::MRView::Tool::NodeSelectionSettingsFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MR::GUI::MRView::Tool::NodeSelectionSettingsFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_MR__GUI__MRView__Tool__NodeSelectionSettingsFrame,
      qt_meta_data_MR__GUI__MRView__Tool__NodeSelectionSettingsFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MR::GUI::MRView::Tool::NodeSelectionSettingsFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MR::GUI::MRView::Tool::NodeSelectionSettingsFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MR::GUI::MRView::Tool::NodeSelectionSettingsFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MR__GUI__MRView__Tool__NodeSelectionSettingsFrame))
        return static_cast<void*>(const_cast< NodeSelectionSettingsFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int MR::GUI::MRView::Tool::NodeSelectionSettingsFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
