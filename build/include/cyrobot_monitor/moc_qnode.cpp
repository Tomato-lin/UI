/****************************************************************************
** Meta object code from reading C++ file 'qnode.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/include/cyrobot_monitor/qnode.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnode.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cyrobot_monitor__QNode_t {
    QByteArrayData data[23];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cyrobot_monitor__QNode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cyrobot_monitor__QNode_t qt_meta_stringdata_cyrobot_monitor__QNode = {
    {
QT_MOC_LITERAL(0, 0, 22), // "cyrobot_monitor::QNode"
QT_MOC_LITERAL(1, 23, 14), // "loggingUpdated"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 11), // "rosShutdown"
QT_MOC_LITERAL(4, 51, 7), // "speed_x"
QT_MOC_LITERAL(5, 59, 1), // "x"
QT_MOC_LITERAL(6, 61, 7), // "speed_y"
QT_MOC_LITERAL(7, 69, 1), // "y"
QT_MOC_LITERAL(8, 71, 5), // "power"
QT_MOC_LITERAL(9, 77, 1), // "p"
QT_MOC_LITERAL(10, 79, 15), // "Master_shutdown"
QT_MOC_LITERAL(11, 95, 10), // "Show_image"
QT_MOC_LITERAL(12, 106, 9), // "image_val"
QT_MOC_LITERAL(13, 116, 14), // "updateRoboPose"
QT_MOC_LITERAL(14, 131, 3), // "pos"
QT_MOC_LITERAL(15, 135, 3), // "yaw"
QT_MOC_LITERAL(16, 139, 9), // "updateMap"
QT_MOC_LITERAL(17, 149, 3), // "map"
QT_MOC_LITERAL(18, 153, 11), // "plannerPath"
QT_MOC_LITERAL(19, 165, 4), // "path"
QT_MOC_LITERAL(20, 170, 15), // "updateLaserScan"
QT_MOC_LITERAL(21, 186, 6), // "points"
QT_MOC_LITERAL(22, 193, 9) // "speed_vel"

    },
    "cyrobot_monitor::QNode\0loggingUpdated\0"
    "\0rosShutdown\0speed_x\0x\0speed_y\0y\0power\0"
    "p\0Master_shutdown\0Show_image\0image_val\0"
    "updateRoboPose\0pos\0yaw\0updateMap\0map\0"
    "plannerPath\0path\0updateLaserScan\0"
    "points\0speed_vel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cyrobot_monitor__QNode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    1,   81,    2, 0x06 /* Public */,
       6,    1,   84,    2, 0x06 /* Public */,
       8,    1,   87,    2, 0x06 /* Public */,
      10,    0,   90,    2, 0x06 /* Public */,
      11,    2,   91,    2, 0x06 /* Public */,
      12,    1,   96,    2, 0x06 /* Public */,
      13,    2,   99,    2, 0x06 /* Public */,
      16,    1,  104,    2, 0x06 /* Public */,
      18,    1,  107,    2, 0x06 /* Public */,
      20,    1,  110,    2, 0x06 /* Public */,
      22,    1,  113,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,    2,    2,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Float,   14,   15,
    QMetaType::Void, QMetaType::QImage,   17,
    QMetaType::Void, QMetaType::QPolygonF,   19,
    QMetaType::Void, QMetaType::QPolygonF,   21,
    QMetaType::Void, QMetaType::Float,    2,

       0        // eod
};

void cyrobot_monitor::QNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNode *_t = static_cast<QNode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loggingUpdated(); break;
        case 1: _t->rosShutdown(); break;
        case 2: _t->speed_x((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->speed_y((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->power((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->Master_shutdown(); break;
        case 6: _t->Show_image((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2]))); break;
        case 7: _t->image_val((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 8: _t->updateRoboPose((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 9: _t->updateMap((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 10: _t->plannerPath((*reinterpret_cast< QPolygonF(*)>(_a[1]))); break;
        case 11: _t->updateLaserScan((*reinterpret_cast< QPolygonF(*)>(_a[1]))); break;
        case 12: _t->speed_vel((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QNode::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::loggingUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QNode::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::rosShutdown)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::speed_x)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::speed_y)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::power)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QNode::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::Master_shutdown)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(int , QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::Show_image)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::image_val)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(QPointF , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::updateRoboPose)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::updateMap)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(QPolygonF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::plannerPath)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(QPolygonF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::updateLaserScan)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::speed_vel)) {
                *result = 12;
                return;
            }
        }
    }
}

const QMetaObject cyrobot_monitor::QNode::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_cyrobot_monitor__QNode.data,
      qt_meta_data_cyrobot_monitor__QNode,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cyrobot_monitor::QNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cyrobot_monitor::QNode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cyrobot_monitor__QNode.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int cyrobot_monitor::QNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void cyrobot_monitor::QNode::loggingUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void cyrobot_monitor::QNode::rosShutdown()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void cyrobot_monitor::QNode::speed_x(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void cyrobot_monitor::QNode::speed_y(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void cyrobot_monitor::QNode::power(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void cyrobot_monitor::QNode::Master_shutdown()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void cyrobot_monitor::QNode::Show_image(int _t1, QImage _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void cyrobot_monitor::QNode::image_val(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void cyrobot_monitor::QNode::updateRoboPose(QPointF _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void cyrobot_monitor::QNode::updateMap(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void cyrobot_monitor::QNode::plannerPath(QPolygonF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void cyrobot_monitor::QNode::updateLaserScan(QPolygonF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void cyrobot_monitor::QNode::speed_vel(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
