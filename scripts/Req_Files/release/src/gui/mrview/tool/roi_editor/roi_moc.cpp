/****************************************************************************
** Meta object code from reading C++ file 'roi.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/gui/mrview/tool/roi_editor/roi.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'roi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MR__GUI__MRView__Tool__ROI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x08,
      39,   27,   27,   27, 0x08,
      51,   27,   27,   27, 0x08,
      63,   27,   27,   27, 0x08,
      76,   27,   27,   27, 0x08,
      88,   27,   27,   27, 0x08,
     100,   27,   27,   27, 0x08,
     112,   27,   27,   27, 0x08,
     128,   27,   27,   27, 0x08,
     154,   27,   27,   27, 0x08,
     183,  181,   27,   27, 0x08,
     226,   27,   27,   27, 0x08,
     245,   27,   27,   27, 0x08,
     259,   27,   27,   27, 0x08,
     283,  276,   27,   27, 0x08,
     304,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MR__GUI__MRView__Tool__ROI[] = {
    "MR::GUI::MRView::Tool::ROI\0\0new_slot()\0"
    "open_slot()\0save_slot()\0close_slot()\0"
    "draw_slot()\0undo_slot()\0redo_slot()\0"
    "hide_all_slot()\0slice_copy_slot(QAction*)\0"
    "select_edit_mode(QAction*)\0,\0"
    "toggle_shown_slot(QModelIndex,QModelIndex)\0"
    "update_selection()\0update_slot()\0"
    "colour_changed()\0unused\0opacity_changed(int)\0"
    "model_rows_changed()\0"
};

void MR::GUI::MRView::Tool::ROI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ROI *_t = static_cast<ROI *>(_o);
        switch (_id) {
        case 0: _t->new_slot(); break;
        case 1: _t->open_slot(); break;
        case 2: _t->save_slot(); break;
        case 3: _t->close_slot(); break;
        case 4: _t->draw_slot(); break;
        case 5: _t->undo_slot(); break;
        case 6: _t->redo_slot(); break;
        case 7: _t->hide_all_slot(); break;
        case 8: _t->slice_copy_slot((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 9: _t->select_edit_mode((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 10: _t->toggle_shown_slot((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 11: _t->update_selection(); break;
        case 12: _t->update_slot(); break;
        case 13: _t->colour_changed(); break;
        case 14: _t->opacity_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->model_rows_changed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MR::GUI::MRView::Tool::ROI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MR::GUI::MRView::Tool::ROI::staticMetaObject = {
    { &Base::staticMetaObject, qt_meta_stringdata_MR__GUI__MRView__Tool__ROI,
      qt_meta_data_MR__GUI__MRView__Tool__ROI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MR::GUI::MRView::Tool::ROI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MR::GUI::MRView::Tool::ROI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MR::GUI::MRView::Tool::ROI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MR__GUI__MRView__Tool__ROI))
        return static_cast<void*>(const_cast< ROI*>(this));
    return Base::qt_metacast(_clname);
}

int MR::GUI::MRView::Tool::ROI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Base::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
