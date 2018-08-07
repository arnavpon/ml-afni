/****************************************************************************
** Meta object code from reading C++ file 'adjust_button.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/mrview/adjust_button.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adjust_button.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MR__GUI__MRView__AdjustButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x05,
      50,   46,   30,   30, 0x05,

 // slots: signature, parameters, type, tag, flags
      70,   30,   30,   30, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MR__GUI__MRView__AdjustButton[] = {
    "MR::GUI::MRView::AdjustButton\0\0"
    "valueChanged()\0val\0valueChanged(float)\0"
    "onSetValue()\0"
};

void MR::GUI::MRView::AdjustButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AdjustButton *_t = static_cast<AdjustButton *>(_o);
        switch (_id) {
        case 0: _t->valueChanged(); break;
        case 1: _t->valueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->onSetValue(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MR::GUI::MRView::AdjustButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MR::GUI::MRView::AdjustButton::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_MR__GUI__MRView__AdjustButton,
      qt_meta_data_MR__GUI__MRView__AdjustButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MR::GUI::MRView::AdjustButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MR::GUI::MRView::AdjustButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MR::GUI::MRView::AdjustButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MR__GUI__MRView__AdjustButton))
        return static_cast<void*>(const_cast< AdjustButton*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int MR::GUI::MRView::AdjustButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MR::GUI::MRView::AdjustButton::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void MR::GUI::MRView::AdjustButton::valueChanged(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
