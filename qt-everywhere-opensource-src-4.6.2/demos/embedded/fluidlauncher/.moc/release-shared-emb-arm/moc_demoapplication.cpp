/****************************************************************************
** Meta object code from reading C++ file 'demoapplication.h'
**
** Created: Mon Feb 13 23:33:37 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../demoapplication.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'demoapplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DemoApplication[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      31,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   16,   16,   16, 0x0a,
      83,   63,   16,   16, 0x0a,
     129,  125,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DemoApplication[] = {
    "DemoApplication\0\0demoStarted()\0"
    "demoFinished()\0processStarted()\0"
    "exitCode,exitStatus\0"
    "processFinished(int,QProcess::ExitStatus)\0"
    "err\0processError(QProcess::ProcessError)\0"
};

const QMetaObject DemoApplication::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DemoApplication,
      qt_meta_data_DemoApplication, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DemoApplication::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DemoApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DemoApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DemoApplication))
        return static_cast<void*>(const_cast< DemoApplication*>(this));
    return QObject::qt_metacast(_clname);
}

int DemoApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: demoStarted(); break;
        case 1: demoFinished(); break;
        case 2: processStarted(); break;
        case 3: processFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 4: processError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void DemoApplication::demoStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void DemoApplication::demoFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
