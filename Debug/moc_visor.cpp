/****************************************************************************
** Meta object code from reading C++ file 'visor.h'
**
** Created: Wed Mar 4 06:47:07 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../visor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'visor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Visor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x08,
      43,    6,    6,    6, 0x08,
      79,    6,    6,    6, 0x08,
     112,    6,    6,    6, 0x08,
     145,    6,    6,    6, 0x08,
     178,    6,    6,    6, 0x08,
     211,    6,    6,    6, 0x08,
     257,    6,    6,    6, 0x08,
     303,    6,    6,    6, 0x08,
     343,    6,    6,    6, 0x08,
     383,    6,    6,    6, 0x08,
     431,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Visor[] = {
    "Visor\0\0on_pBDirPatronesPositivos_clicked()\0"
    "on_pBDirPatronesNegativos_clicked()\0"
    "on_pBSigPatronPositivo_clicked()\0"
    "on_pBAntPatronPositivo_clicked()\0"
    "on_pBSigPatronNegativo_clicked()\0"
    "on_pBAntPatronNegativo_clicked()\0"
    "on_pBGeneraFicheroPatronesPositivos_clicked()\0"
    "on_pBGeneraFicheroPatronesNegativos_clicked()\0"
    "on_pBEscalarPatronesPositivos_clicked()\0"
    "on_pBEspejarPatronesPositivos_clicked()\0"
    "on_pBEspejarVerticalPatronesPositivos_clicked()\0"
    "on_pBGirarPatronesPositivos_clicked()\0"
};

void Visor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Visor *_t = static_cast<Visor *>(_o);
        switch (_id) {
        case 0: _t->on_pBDirPatronesPositivos_clicked(); break;
        case 1: _t->on_pBDirPatronesNegativos_clicked(); break;
        case 2: _t->on_pBSigPatronPositivo_clicked(); break;
        case 3: _t->on_pBAntPatronPositivo_clicked(); break;
        case 4: _t->on_pBSigPatronNegativo_clicked(); break;
        case 5: _t->on_pBAntPatronNegativo_clicked(); break;
        case 6: _t->on_pBGeneraFicheroPatronesPositivos_clicked(); break;
        case 7: _t->on_pBGeneraFicheroPatronesNegativos_clicked(); break;
        case 8: _t->on_pBEscalarPatronesPositivos_clicked(); break;
        case 9: _t->on_pBEspejarPatronesPositivos_clicked(); break;
        case 10: _t->on_pBEspejarVerticalPatronesPositivos_clicked(); break;
        case 11: _t->on_pBGirarPatronesPositivos_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Visor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Visor::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Visor,
      qt_meta_data_Visor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Visor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Visor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Visor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Visor))
        return static_cast<void*>(const_cast< Visor*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Visor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
