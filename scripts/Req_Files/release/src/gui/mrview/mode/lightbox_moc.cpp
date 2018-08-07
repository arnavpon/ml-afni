/****************************************************************************
** Meta object code from reading C++ file 'lightbox.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/mrview/mode/lightbox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lightbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MR__GUI__MRView__Mode__LightBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   32,   32,   32, 0x05,

 // slots: signature, parameters, type, tag, flags
      63,   57,   32,   32, 0x0a,
      79,   57,   32,   32, 0x0a,
      98,   57,   32,   32, 0x0a,
     120,   57,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MR__GUI__MRView__Mode__LightBox[] = {
    "MR::GUI::MRView::Mode::LightBox\0\0"
    "slice_increment_reset()\0value\0"
    "nrows_slot(int)\0ncolumns_slot(int)\0"
    "slice_inc_slot(float)\0show_grid_slot(bool)\0"
};

void MR::GUI::MRView::Mode::LightBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LightBox *_t = static_cast<LightBox *>(_o);
        switch (_id) {
        case 0: _t->slice_increment_reset(); break;
        case 1: _t->nrows_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->ncolumns_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slice_inc_slot((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->show_grid_slot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MR::GUI::MRView::Mode::LightBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MR::GUI::MRView::Mode::LightBox::staticMetaObject = {
    { &Slice::staticMetaObject, qt_meta_stringdata_MR__GUI__MRView__Mode__LightBox,
      qt_meta_data_MR__GUI__MRView__Mode__LightBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MR::GUI::MRView::Mode::LightBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MR::GUI::MRView::Mode::LightBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MR::GUI::MRView::Mode::LightBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MR__GUI__MRView__Mode__LightBox))
        return static_cast<void*>(const_cast< LightBox*>(this));
    return Slice::qt_metacast(_clname);
}

int MR::GUI::MRView::Mode::LightBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Slice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void MR::GUI::MRView::Mode::LightBox::slice_increment_reset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
