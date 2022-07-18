/****************************************************************************
** Meta object code from reading C++ file 'main_window.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/include/cyrobot_monitor/main_window.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cyrobot_monitor__MainWindow_t {
    QByteArrayData data[54];
    char stringdata0[921];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cyrobot_monitor__MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cyrobot_monitor__MainWindow_t qt_meta_stringdata_cyrobot_monitor__MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 27), // "cyrobot_monitor::MainWindow"
QT_MOC_LITERAL(1, 28, 15), // "signalSet2DPose"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 15), // "signalSet2DGoal"
QT_MOC_LITERAL(4, 61, 19), // "signalSetMoveCamera"
QT_MOC_LITERAL(5, 81, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(6, 106, 25), // "on_button_connect_clicked"
QT_MOC_LITERAL(7, 132, 5), // "check"
QT_MOC_LITERAL(8, 138, 12), // "slot_speed_x"
QT_MOC_LITERAL(9, 151, 1), // "x"
QT_MOC_LITERAL(10, 153, 14), // "slot_speed_yaw"
QT_MOC_LITERAL(11, 168, 3), // "yaw"
QT_MOC_LITERAL(12, 172, 10), // "slot_power"
QT_MOC_LITERAL(13, 183, 1), // "p"
QT_MOC_LITERAL(14, 185, 16), // "slot_rosShutdown"
QT_MOC_LITERAL(15, 202, 23), // "quick_cmds_check_change"
QT_MOC_LITERAL(16, 226, 10), // "cmd_output"
QT_MOC_LITERAL(17, 237, 16), // "cmd_error_output"
QT_MOC_LITERAL(18, 254, 17), // "refreashTopicList"
QT_MOC_LITERAL(19, 272, 17), // "updateLoggingView"
QT_MOC_LITERAL(20, 290, 23), // "Slider_raw_valueChanged"
QT_MOC_LITERAL(21, 314, 1), // "v"
QT_MOC_LITERAL(22, 316, 26), // "Slider_linear_valueChanged"
QT_MOC_LITERAL(23, 343, 5), // "value"
QT_MOC_LITERAL(24, 349, 16), // "slot_cmd_control"
QT_MOC_LITERAL(25, 366, 30), // "slot_tab_manage_currentChanged"
QT_MOC_LITERAL(26, 397, 30), // "slot_tab_Widget_currentChanged"
QT_MOC_LITERAL(27, 428, 16), // "slot_set_2D_Goal"
QT_MOC_LITERAL(28, 445, 15), // "slot_set_2D_Pos"
QT_MOC_LITERAL(29, 461, 15), // "slot_set_select"
QT_MOC_LITERAL(30, 477, 20), // "slot_move_camera_btn"
QT_MOC_LITERAL(31, 498, 21), // "slot_update_dashboard"
QT_MOC_LITERAL(32, 520, 18), // "slot_setting_frame"
QT_MOC_LITERAL(33, 539, 21), // "slot_set_return_point"
QT_MOC_LITERAL(34, 561, 17), // "slot_return_point"
QT_MOC_LITERAL(35, 579, 20), // "slot_position_change"
QT_MOC_LITERAL(36, 600, 13), // "quick_cmd_add"
QT_MOC_LITERAL(37, 614, 16), // "quick_cmd_remove"
QT_MOC_LITERAL(38, 631, 15), // "slot_show_image"
QT_MOC_LITERAL(39, 647, 17), // "slot_update_image"
QT_MOC_LITERAL(40, 665, 14), // "slot_sub_image"
QT_MOC_LITERAL(41, 680, 16), // "slot_dis_connect"
QT_MOC_LITERAL(42, 697, 22), // "slot_hide_table_widget"
QT_MOC_LITERAL(43, 720, 18), // "slot_rockKeyChange"
QT_MOC_LITERAL(44, 739, 17), // "slot_closeWindows"
QT_MOC_LITERAL(45, 757, 15), // "slot_minWindows"
QT_MOC_LITERAL(46, 773, 15), // "slot_maxWindows"
QT_MOC_LITERAL(47, 789, 22), // "slot_chartTimerTimeout"
QT_MOC_LITERAL(48, 812, 23), // "slot_pubImageMapTimeOut"
QT_MOC_LITERAL(49, 836, 20), // "slot_updateCursorPos"
QT_MOC_LITERAL(50, 857, 3), // "pos"
QT_MOC_LITERAL(51, 861, 18), // "slot_changeMapType"
QT_MOC_LITERAL(52, 880, 22), // "slot_quick_cmd_clicked"
QT_MOC_LITERAL(53, 903, 17) // "slot_quick_output"

    },
    "cyrobot_monitor::MainWindow\0signalSet2DPose\0"
    "\0signalSet2DGoal\0signalSetMoveCamera\0"
    "on_actionAbout_triggered\0"
    "on_button_connect_clicked\0check\0"
    "slot_speed_x\0x\0slot_speed_yaw\0yaw\0"
    "slot_power\0p\0slot_rosShutdown\0"
    "quick_cmds_check_change\0cmd_output\0"
    "cmd_error_output\0refreashTopicList\0"
    "updateLoggingView\0Slider_raw_valueChanged\0"
    "v\0Slider_linear_valueChanged\0value\0"
    "slot_cmd_control\0slot_tab_manage_currentChanged\0"
    "slot_tab_Widget_currentChanged\0"
    "slot_set_2D_Goal\0slot_set_2D_Pos\0"
    "slot_set_select\0slot_move_camera_btn\0"
    "slot_update_dashboard\0slot_setting_frame\0"
    "slot_set_return_point\0slot_return_point\0"
    "slot_position_change\0quick_cmd_add\0"
    "quick_cmd_remove\0slot_show_image\0"
    "slot_update_image\0slot_sub_image\0"
    "slot_dis_connect\0slot_hide_table_widget\0"
    "slot_rockKeyChange\0slot_closeWindows\0"
    "slot_minWindows\0slot_maxWindows\0"
    "slot_chartTimerTimeout\0slot_pubImageMapTimeOut\0"
    "slot_updateCursorPos\0pos\0slot_changeMapType\0"
    "slot_quick_cmd_clicked\0slot_quick_output"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cyrobot_monitor__MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      45,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  239,    2, 0x06 /* Public */,
       3,    0,  240,    2, 0x06 /* Public */,
       4,    0,  241,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  242,    2, 0x0a /* Public */,
       6,    1,  243,    2, 0x0a /* Public */,
       8,    1,  246,    2, 0x0a /* Public */,
      10,    1,  249,    2, 0x0a /* Public */,
      12,    1,  252,    2, 0x0a /* Public */,
      14,    0,  255,    2, 0x0a /* Public */,
      15,    1,  256,    2, 0x0a /* Public */,
      16,    0,  259,    2, 0x0a /* Public */,
      17,    0,  260,    2, 0x0a /* Public */,
      18,    0,  261,    2, 0x0a /* Public */,
      19,    0,  262,    2, 0x0a /* Public */,
      20,    1,  263,    2, 0x0a /* Public */,
      22,    1,  266,    2, 0x0a /* Public */,
      24,    0,  269,    2, 0x0a /* Public */,
      25,    1,  270,    2, 0x0a /* Public */,
      26,    1,  273,    2, 0x0a /* Public */,
      27,    0,  276,    2, 0x0a /* Public */,
      28,    0,  277,    2, 0x0a /* Public */,
      29,    0,  278,    2, 0x0a /* Public */,
      30,    0,  279,    2, 0x0a /* Public */,
      31,    1,  280,    2, 0x0a /* Public */,
      32,    0,  283,    2, 0x0a /* Public */,
      33,    0,  284,    2, 0x0a /* Public */,
      34,    0,  285,    2, 0x0a /* Public */,
      35,    5,  286,    2, 0x0a /* Public */,
      36,    0,  297,    2, 0x0a /* Public */,
      37,    0,  298,    2, 0x0a /* Public */,
      38,    2,  299,    2, 0x0a /* Public */,
      39,    1,  304,    2, 0x0a /* Public */,
      40,    0,  307,    2, 0x0a /* Public */,
      41,    0,  308,    2, 0x0a /* Public */,
      42,    0,  309,    2, 0x0a /* Public */,
      43,    1,  310,    2, 0x0a /* Public */,
      44,    0,  313,    2, 0x0a /* Public */,
      45,    0,  314,    2, 0x0a /* Public */,
      46,    0,  315,    2, 0x0a /* Public */,
      47,    0,  316,    2, 0x0a /* Public */,
      48,    0,  317,    2, 0x0a /* Public */,
      49,    1,  318,    2, 0x0a /* Public */,
      51,    1,  321,    2, 0x0a /* Public */,
      52,    0,  324,    2, 0x0a /* Public */,
      53,    0,  325,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Float,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,    2,    2,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF,   50,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cyrobot_monitor::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalSet2DPose(); break;
        case 1: _t->signalSet2DGoal(); break;
        case 2: _t->signalSetMoveCamera(); break;
        case 3: _t->on_actionAbout_triggered(); break;
        case 4: _t->on_button_connect_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->slot_speed_x((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->slot_speed_yaw((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->slot_power((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->slot_rosShutdown(); break;
        case 9: _t->quick_cmds_check_change((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->cmd_output(); break;
        case 11: _t->cmd_error_output(); break;
        case 12: _t->refreashTopicList(); break;
        case 13: _t->updateLoggingView(); break;
        case 14: _t->Slider_raw_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->Slider_linear_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->slot_cmd_control(); break;
        case 17: _t->slot_tab_manage_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->slot_tab_Widget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->slot_set_2D_Goal(); break;
        case 20: _t->slot_set_2D_Pos(); break;
        case 21: _t->slot_set_select(); break;
        case 22: _t->slot_move_camera_btn(); break;
        case 23: _t->slot_update_dashboard((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 24: _t->slot_setting_frame(); break;
        case 25: _t->slot_set_return_point(); break;
        case 26: _t->slot_return_point(); break;
        case 27: _t->slot_position_change((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        case 28: _t->quick_cmd_add(); break;
        case 29: _t->quick_cmd_remove(); break;
        case 30: _t->slot_show_image((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2]))); break;
        case 31: _t->slot_update_image((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 32: _t->slot_sub_image(); break;
        case 33: _t->slot_dis_connect(); break;
        case 34: _t->slot_hide_table_widget(); break;
        case 35: _t->slot_rockKeyChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->slot_closeWindows(); break;
        case 37: _t->slot_minWindows(); break;
        case 38: _t->slot_maxWindows(); break;
        case 39: _t->slot_chartTimerTimeout(); break;
        case 40: _t->slot_pubImageMapTimeOut(); break;
        case 41: _t->slot_updateCursorPos((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 42: _t->slot_changeMapType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->slot_quick_cmd_clicked(); break;
        case 44: _t->slot_quick_output(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalSet2DPose)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalSet2DGoal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalSetMoveCamera)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject cyrobot_monitor::MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_cyrobot_monitor__MainWindow.data,
      qt_meta_data_cyrobot_monitor__MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cyrobot_monitor::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cyrobot_monitor::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cyrobot_monitor__MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int cyrobot_monitor::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 45)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 45;
    }
    return _id;
}

// SIGNAL 0
void cyrobot_monitor::MainWindow::signalSet2DPose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void cyrobot_monitor::MainWindow::signalSet2DGoal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void cyrobot_monitor::MainWindow::signalSetMoveCamera()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
