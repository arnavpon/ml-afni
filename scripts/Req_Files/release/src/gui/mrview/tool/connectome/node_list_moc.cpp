/****************************************************************************
** Meta object code from reading C++ file 'node_list.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/gui/mrview/tool/connectome/node_list.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'node_list.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MR__GUI__MRView__Tool__Node_list[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   33,   33,   33, 0x08,
      59,   57,   33,   33, 0x08,
     118,   33,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MR__GUI__MRView__Tool__Node_list[] = {
    "MR::GUI::MRView::Tool::Node_list\0\0"
    "clear_selection_slot()\0,\0"
    "node_selection_changed_slot(QItemSelection,QItemSelection)\0"
    "node_selection_settings_dialog_slot()\0"
};

void MR::GUI::MRView::Tool::Node_list::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Node_list *_t = static_cast<Node_list *>(_o);
        switch (_id) {
        case 0: _t->clear_selection_slot(); break;
        case 1: _t->node_selection_changed_slot((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 2: _t->node_selection_settings_dialog_slot(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MR::GUI::MRView::Tool::Node_list::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MR::GUI::MRView::Tool::Node_list::staticMetaObject = {
    { &Tool::Base::staticMetaObject, qt_meta_stringdata_MR__GUI__MRView__Tool__Node_list,
      qt_meta_data_MR__GUI__MRView__Tool__Node_list, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MR::GUI::MRView::Tool::Node_list::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MR::GUI::MRView::Tool::Node_list::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MR::GUI::MRView::Tool::Node_list::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MR__GUI__MRView__Tool__Node_list))
        return static_cast<void*>(const_cast< Node_list*>(this));
    typedef Tool::Base QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int MR::GUI::MRView::Tool::Node_list::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tool::Base QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
