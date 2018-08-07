/****************************************************************************
** Meta object code from reading C++ file 'combo_box_error.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/mrview/combo_box_error.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'combo_box_error.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MR__GUI__MRView__ComboBoxWithErrorMsg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      39,   38,   38,   38, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MR__GUI__MRView__ComboBoxWithErrorMsg[] = {
    "MR::GUI::MRView::ComboBoxWithErrorMsg\0"
    "\0onSetIndex(int)\0"
};

void MR::GUI::MRView::ComboBoxWithErrorMsg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ComboBoxWithErrorMsg *_t = static_cast<ComboBoxWithErrorMsg *>(_o);
        switch (_id) {
        case 0: _t->onSetIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MR::GUI::MRView::ComboBoxWithErrorMsg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MR::GUI::MRView::ComboBoxWithErrorMsg::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_MR__GUI__MRView__ComboBoxWithErrorMsg,
      qt_meta_data_MR__GUI__MRView__ComboBoxWithErrorMsg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MR::GUI::MRView::ComboBoxWithErrorMsg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MR::GUI::MRView::ComboBoxWithErrorMsg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MR::GUI::MRView::ComboBoxWithErrorMsg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MR__GUI__MRView__ComboBoxWithErrorMsg))
        return static_cast<void*>(const_cast< ComboBoxWithErrorMsg*>(this));
    return QComboBox::qt_metacast(_clname);
}

int MR::GUI::MRView::ComboBoxWithErrorMsg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
