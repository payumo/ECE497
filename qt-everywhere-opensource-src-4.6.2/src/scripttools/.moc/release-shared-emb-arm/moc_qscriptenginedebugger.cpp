/****************************************************************************
** Meta object code from reading C++ file 'qscriptenginedebugger.h'
**
** Created: Mon Feb 13 23:03:52 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../debugging/qscriptenginedebugger.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscriptenginedebugger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QScriptEngineDebugger[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,
      45,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      65,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QScriptEngineDebugger[] = {
    "QScriptEngineDebugger\0\0evaluationSuspended()\0"
    "evaluationResumed()\0_q_showStandardWindow()\0"
};

const QMetaObject QScriptEngineDebugger::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QScriptEngineDebugger,
      qt_meta_data_QScriptEngineDebugger, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QScriptEngineDebugger::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QScriptEngineDebugger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QScriptEngineDebugger::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QScriptEngineDebugger))
        return static_cast<void*>(const_cast< QScriptEngineDebugger*>(this));
    return QObject::qt_metacast(_clname);
}

int QScriptEngineDebugger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: evaluationSuspended(); break;
        case 1: evaluationResumed(); break;
        case 2: d_func()->_q_showStandardWindow(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QScriptEngineDebugger::evaluationSuspended()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QScriptEngineDebugger::evaluationResumed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
