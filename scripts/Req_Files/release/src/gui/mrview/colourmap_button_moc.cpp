/****************************************************************************
** Meta object code from reading C++ file 'colourmap_button.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/mrview/colourmap_button.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colourmap_button.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MR__GUI__MRView__ColourMapButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      41,   34,   33,   33, 0x08,
      73,   33,   33,   33, 0x08,
      94,   33,   33,   33, 0x08,
     130,  122,   33,   33, 0x08,
     166,  157,   33,   33, 0x08,
     194,   33,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MR__GUI__MRView__ColourMapButton[] = {
    "MR::GUI::MRView::ColourMapButton\0\0"
    "action\0select_colourmap_slot(QAction*)\0"
    "select_colour_slot()\0select_random_colour_slot()\0"
    "visible\0show_colour_bar_slot(bool)\0"
    "inverted\0invert_colourmap_slot(bool)\0"
    "reset_intensity_slot()\0"
};

void MR::GUI::MRView::ColourMapButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ColourMapButton *_t = static_cast<ColourMapButton *>(_o);
        switch (_id) {
        case 0: _t->select_colourmap_slot((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->select_colour_slot(); break;
        case 2: _t->select_random_colour_slot(); break;
        case 3: _t->show_colour_bar_slot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->invert_colourmap_slot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->reset_intensity_slot(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MR::GUI::MRView::ColourMapButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MR::GUI::MRView::ColourMapButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_MR__GUI__MRView__ColourMapButton,
      qt_meta_data_MR__GUI__MRView__ColourMapButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MR::GUI::MRView::ColourMapButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MR::GUI::MRView::ColourMapButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MR::GUI::MRView::ColourMapButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MR__GUI__MRView__ColourMapButton))
        return static_cast<void*>(const_cast< ColourMapButton*>(this));
    return QToolButton::qt_metacast(_clname);
}

int MR::GUI::MRView::ColourMapButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
