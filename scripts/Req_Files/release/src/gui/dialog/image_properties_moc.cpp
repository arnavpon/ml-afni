/****************************************************************************
** Meta object code from reading C++ file 'image_properties.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/dialog/image_properties.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'image_properties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MR__GUI__Dialog__ImageProperties[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      40,   34,   33,   33, 0x08,
      61,   33,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MR__GUI__Dialog__ImageProperties[] = {
    "MR::GUI::Dialog::ImageProperties\0\0"
    "point\0context_menu(QPoint)\0write_to_file()\0"
};

void MR::GUI::Dialog::ImageProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ImageProperties *_t = static_cast<ImageProperties *>(_o);
        switch (_id) {
        case 0: _t->context_menu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->write_to_file(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MR::GUI::Dialog::ImageProperties::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MR::GUI::Dialog::ImageProperties::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MR__GUI__Dialog__ImageProperties,
      qt_meta_data_MR__GUI__Dialog__ImageProperties, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MR::GUI::Dialog::ImageProperties::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MR::GUI::Dialog::ImageProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MR::GUI::Dialog::ImageProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MR__GUI__Dialog__ImageProperties))
        return static_cast<void*>(const_cast< ImageProperties*>(this));
    return QDialog::qt_metacast(_clname);
}

int MR::GUI::Dialog::ImageProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
