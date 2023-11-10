/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../include/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[107];
    char stringdata0[1764];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 16), // "setDrvStrokeSBox"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 15), // "setDrvVelocSBox"
QT_MOC_LITERAL(4, 45, 18), // "setDrvStrokeSlider"
QT_MOC_LITERAL(5, 64, 17), // "setDrvVelocSlider"
QT_MOC_LITERAL(6, 82, 15), // "setDrvVelocZero"
QT_MOC_LITERAL(7, 98, 16), // "setDrvStrokeZero"
QT_MOC_LITERAL(8, 115, 11), // "sndDrvModeM"
QT_MOC_LITERAL(9, 127, 11), // "sndDrvModeP"
QT_MOC_LITERAL(10, 139, 12), // "sndDrvCModeS"
QT_MOC_LITERAL(11, 152, 12), // "sndDrvCModeV"
QT_MOC_LITERAL(12, 165, 13), // "sndDrvOModeON"
QT_MOC_LITERAL(13, 179, 14), // "sndDrvOModeOFF"
QT_MOC_LITERAL(14, 194, 13), // "sndDrvServoON"
QT_MOC_LITERAL(15, 208, 14), // "sndDrvServoOFF"
QT_MOC_LITERAL(16, 223, 12), // "sndDrvShiftD"
QT_MOC_LITERAL(17, 236, 12), // "sndDrvShiftN"
QT_MOC_LITERAL(18, 249, 12), // "sndDrvShiftP"
QT_MOC_LITERAL(19, 262, 12), // "sndDrvShiftR"
QT_MOC_LITERAL(20, 275, 12), // "sndDrvShiftB"
QT_MOC_LITERAL(21, 288, 12), // "sndDrvShiftS"
QT_MOC_LITERAL(22, 301, 15), // "setStrAngleSBox"
QT_MOC_LITERAL(23, 317, 16), // "setStrTorqueSBox"
QT_MOC_LITERAL(24, 334, 17), // "setStrAngleSlider"
QT_MOC_LITERAL(25, 352, 18), // "setStrTorqueSlider"
QT_MOC_LITERAL(26, 371, 16), // "setStrTorqueZero"
QT_MOC_LITERAL(27, 388, 15), // "setStrAngleZero"
QT_MOC_LITERAL(28, 404, 11), // "sndStrModeM"
QT_MOC_LITERAL(29, 416, 11), // "sndStrModeP"
QT_MOC_LITERAL(30, 428, 12), // "sndStrCModeA"
QT_MOC_LITERAL(31, 441, 12), // "sndStrCModeT"
QT_MOC_LITERAL(32, 454, 13), // "sndStrOModeON"
QT_MOC_LITERAL(33, 468, 14), // "sndStrOModeOFF"
QT_MOC_LITERAL(34, 483, 13), // "sndStrServoON"
QT_MOC_LITERAL(35, 497, 14), // "sndStrServoOFF"
QT_MOC_LITERAL(36, 512, 16), // "setBrkStrokeSBox"
QT_MOC_LITERAL(37, 529, 18), // "setBrkStrokeSlider"
QT_MOC_LITERAL(38, 548, 16), // "setBrkStrokeZero"
QT_MOC_LITERAL(39, 565, 12), // "sndBrkLampOn"
QT_MOC_LITERAL(40, 578, 13), // "sndBrkLampOff"
QT_MOC_LITERAL(41, 592, 12), // "sndBrkModeOn"
QT_MOC_LITERAL(42, 605, 13), // "sndBrkModeOff"
QT_MOC_LITERAL(43, 619, 16), // "sndBlinkerLeftOn"
QT_MOC_LITERAL(44, 636, 17), // "sndBlinkerLeftOff"
QT_MOC_LITERAL(45, 654, 17), // "sndBlinkerRightOn"
QT_MOC_LITERAL(46, 672, 18), // "sndBlinkerRightOff"
QT_MOC_LITERAL(47, 691, 16), // "SndDiagEngineReq"
QT_MOC_LITERAL(48, 708, 18), // "SndDiagEngineClear"
QT_MOC_LITERAL(49, 727, 12), // "SndDiagHVReq"
QT_MOC_LITERAL(50, 740, 14), // "SndDiagHVClear"
QT_MOC_LITERAL(51, 755, 16), // "SndDiagCruiseReq"
QT_MOC_LITERAL(52, 772, 14), // "SndDiagBattReq"
QT_MOC_LITERAL(53, 787, 16), // "SndDiagBattClear"
QT_MOC_LITERAL(54, 804, 9), // "SndErrReq"
QT_MOC_LITERAL(55, 814, 11), // "SndErrClear"
QT_MOC_LITERAL(56, 826, 13), // "SndVersionReq"
QT_MOC_LITERAL(57, 840, 16), // "GetConfStrGainKP"
QT_MOC_LITERAL(58, 857, 16), // "GetConfStrGainKI"
QT_MOC_LITERAL(59, 874, 16), // "GetConfStrGainKD"
QT_MOC_LITERAL(60, 891, 17), // "GetConfStrDecTime"
QT_MOC_LITERAL(61, 909, 16), // "GetConfStrWindow"
QT_MOC_LITERAL(62, 926, 15), // "GetConfStrPunch"
QT_MOC_LITERAL(63, 942, 16), // "GetConfStrMaxTrq"
QT_MOC_LITERAL(64, 959, 19), // "GetConfStrCCWFactor"
QT_MOC_LITERAL(65, 979, 20), // "GetConfVelocMaxSpeed"
QT_MOC_LITERAL(66, 1000, 19), // "GetConfVelocGainKPP"
QT_MOC_LITERAL(67, 1020, 19), // "GetConfVelocGainKPM"
QT_MOC_LITERAL(68, 1040, 19), // "GetConfVelocWindowP"
QT_MOC_LITERAL(69, 1060, 19), // "GetConfVelocWindowM"
QT_MOC_LITERAL(70, 1080, 18), // "GetConfVelocPunchP"
QT_MOC_LITERAL(71, 1099, 18), // "GetConfVelocPunchM"
QT_MOC_LITERAL(72, 1118, 22), // "GetConfVelocMaxOutputP"
QT_MOC_LITERAL(73, 1141, 22), // "GetConfVelocMaxOutputM"
QT_MOC_LITERAL(74, 1164, 20), // "GetConfStrOverrideTh"
QT_MOC_LITERAL(75, 1185, 20), // "GetConfAccOverrideTh"
QT_MOC_LITERAL(76, 1206, 20), // "GetConfBrkOverrideTh"
QT_MOC_LITERAL(77, 1227, 16), // "GetConfTestFlags"
QT_MOC_LITERAL(78, 1244, 25), // "GetConfEmergencyBrakeRate"
QT_MOC_LITERAL(79, 1270, 16), // "SetConfStrGainKP"
QT_MOC_LITERAL(80, 1287, 16), // "SetConfStrGainKI"
QT_MOC_LITERAL(81, 1304, 16), // "SetConfStrGainKD"
QT_MOC_LITERAL(82, 1321, 17), // "SetConfStrDecTime"
QT_MOC_LITERAL(83, 1339, 16), // "SetConfStrWindow"
QT_MOC_LITERAL(84, 1356, 15), // "SetConfStrPunch"
QT_MOC_LITERAL(85, 1372, 16), // "SetConfStrMaxTrq"
QT_MOC_LITERAL(86, 1389, 19), // "SetConfStrCCWFactor"
QT_MOC_LITERAL(87, 1409, 20), // "SetConfVelocMaxSpeed"
QT_MOC_LITERAL(88, 1430, 19), // "SetConfVelocGainKPP"
QT_MOC_LITERAL(89, 1450, 19), // "SetConfVelocGainKPM"
QT_MOC_LITERAL(90, 1470, 19), // "SetConfVelocWindowP"
QT_MOC_LITERAL(91, 1490, 19), // "SetConfVelocWindowM"
QT_MOC_LITERAL(92, 1510, 18), // "SetConfVelocPunchP"
QT_MOC_LITERAL(93, 1529, 18), // "SetConfVelocPunchM"
QT_MOC_LITERAL(94, 1548, 22), // "SetConfVelocMaxOutputP"
QT_MOC_LITERAL(95, 1571, 22), // "SetConfVelocMaxOutputM"
QT_MOC_LITERAL(96, 1594, 20), // "SetConfStrOverrideTh"
QT_MOC_LITERAL(97, 1615, 20), // "SetConfAccOverrideTh"
QT_MOC_LITERAL(98, 1636, 20), // "SetConfBrkOverrideTh"
QT_MOC_LITERAL(99, 1657, 16), // "SetConfTestFlags"
QT_MOC_LITERAL(100, 1674, 25), // "SetConfEmergencyBrakeRate"
QT_MOC_LITERAL(101, 1700, 10), // "SaveConfig"
QT_MOC_LITERAL(102, 1711, 8), // "readLoop"
QT_MOC_LITERAL(103, 1720, 12), // "sndDrvTarget"
QT_MOC_LITERAL(104, 1733, 8), // "startLog"
QT_MOC_LITERAL(105, 1742, 7), // "stopLog"
QT_MOC_LITERAL(106, 1750, 13) // "setGameEnable"

    },
    "MainWindow\0setDrvStrokeSBox\0\0"
    "setDrvVelocSBox\0setDrvStrokeSlider\0"
    "setDrvVelocSlider\0setDrvVelocZero\0"
    "setDrvStrokeZero\0sndDrvModeM\0sndDrvModeP\0"
    "sndDrvCModeS\0sndDrvCModeV\0sndDrvOModeON\0"
    "sndDrvOModeOFF\0sndDrvServoON\0"
    "sndDrvServoOFF\0sndDrvShiftD\0sndDrvShiftN\0"
    "sndDrvShiftP\0sndDrvShiftR\0sndDrvShiftB\0"
    "sndDrvShiftS\0setStrAngleSBox\0"
    "setStrTorqueSBox\0setStrAngleSlider\0"
    "setStrTorqueSlider\0setStrTorqueZero\0"
    "setStrAngleZero\0sndStrModeM\0sndStrModeP\0"
    "sndStrCModeA\0sndStrCModeT\0sndStrOModeON\0"
    "sndStrOModeOFF\0sndStrServoON\0"
    "sndStrServoOFF\0setBrkStrokeSBox\0"
    "setBrkStrokeSlider\0setBrkStrokeZero\0"
    "sndBrkLampOn\0sndBrkLampOff\0sndBrkModeOn\0"
    "sndBrkModeOff\0sndBlinkerLeftOn\0"
    "sndBlinkerLeftOff\0sndBlinkerRightOn\0"
    "sndBlinkerRightOff\0SndDiagEngineReq\0"
    "SndDiagEngineClear\0SndDiagHVReq\0"
    "SndDiagHVClear\0SndDiagCruiseReq\0"
    "SndDiagBattReq\0SndDiagBattClear\0"
    "SndErrReq\0SndErrClear\0SndVersionReq\0"
    "GetConfStrGainKP\0GetConfStrGainKI\0"
    "GetConfStrGainKD\0GetConfStrDecTime\0"
    "GetConfStrWindow\0GetConfStrPunch\0"
    "GetConfStrMaxTrq\0GetConfStrCCWFactor\0"
    "GetConfVelocMaxSpeed\0GetConfVelocGainKPP\0"
    "GetConfVelocGainKPM\0GetConfVelocWindowP\0"
    "GetConfVelocWindowM\0GetConfVelocPunchP\0"
    "GetConfVelocPunchM\0GetConfVelocMaxOutputP\0"
    "GetConfVelocMaxOutputM\0GetConfStrOverrideTh\0"
    "GetConfAccOverrideTh\0GetConfBrkOverrideTh\0"
    "GetConfTestFlags\0GetConfEmergencyBrakeRate\0"
    "SetConfStrGainKP\0SetConfStrGainKI\0"
    "SetConfStrGainKD\0SetConfStrDecTime\0"
    "SetConfStrWindow\0SetConfStrPunch\0"
    "SetConfStrMaxTrq\0SetConfStrCCWFactor\0"
    "SetConfVelocMaxSpeed\0SetConfVelocGainKPP\0"
    "SetConfVelocGainKPM\0SetConfVelocWindowP\0"
    "SetConfVelocWindowM\0SetConfVelocPunchP\0"
    "SetConfVelocPunchM\0SetConfVelocMaxOutputP\0"
    "SetConfVelocMaxOutputM\0SetConfStrOverrideTh\0"
    "SetConfAccOverrideTh\0SetConfBrkOverrideTh\0"
    "SetConfTestFlags\0SetConfEmergencyBrakeRate\0"
    "SaveConfig\0readLoop\0sndDrvTarget\0"
    "startLog\0stopLog\0setGameEnable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     105,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  539,    2, 0x08 /* Private */,
       3,    0,  540,    2, 0x08 /* Private */,
       4,    0,  541,    2, 0x08 /* Private */,
       5,    0,  542,    2, 0x08 /* Private */,
       6,    0,  543,    2, 0x08 /* Private */,
       7,    0,  544,    2, 0x08 /* Private */,
       8,    0,  545,    2, 0x08 /* Private */,
       9,    0,  546,    2, 0x08 /* Private */,
      10,    0,  547,    2, 0x08 /* Private */,
      11,    0,  548,    2, 0x08 /* Private */,
      12,    0,  549,    2, 0x08 /* Private */,
      13,    0,  550,    2, 0x08 /* Private */,
      14,    0,  551,    2, 0x08 /* Private */,
      15,    0,  552,    2, 0x08 /* Private */,
      16,    0,  553,    2, 0x08 /* Private */,
      17,    0,  554,    2, 0x08 /* Private */,
      18,    0,  555,    2, 0x08 /* Private */,
      19,    0,  556,    2, 0x08 /* Private */,
      20,    0,  557,    2, 0x08 /* Private */,
      21,    0,  558,    2, 0x08 /* Private */,
      22,    0,  559,    2, 0x08 /* Private */,
      23,    0,  560,    2, 0x08 /* Private */,
      24,    0,  561,    2, 0x08 /* Private */,
      25,    0,  562,    2, 0x08 /* Private */,
      26,    0,  563,    2, 0x08 /* Private */,
      27,    0,  564,    2, 0x08 /* Private */,
      28,    0,  565,    2, 0x08 /* Private */,
      29,    0,  566,    2, 0x08 /* Private */,
      30,    0,  567,    2, 0x08 /* Private */,
      31,    0,  568,    2, 0x08 /* Private */,
      32,    0,  569,    2, 0x08 /* Private */,
      33,    0,  570,    2, 0x08 /* Private */,
      34,    0,  571,    2, 0x08 /* Private */,
      35,    0,  572,    2, 0x08 /* Private */,
      36,    0,  573,    2, 0x08 /* Private */,
      37,    0,  574,    2, 0x08 /* Private */,
      38,    0,  575,    2, 0x08 /* Private */,
      39,    0,  576,    2, 0x08 /* Private */,
      40,    0,  577,    2, 0x08 /* Private */,
      41,    0,  578,    2, 0x08 /* Private */,
      42,    0,  579,    2, 0x08 /* Private */,
      43,    0,  580,    2, 0x08 /* Private */,
      44,    0,  581,    2, 0x08 /* Private */,
      45,    0,  582,    2, 0x08 /* Private */,
      46,    0,  583,    2, 0x08 /* Private */,
      47,    0,  584,    2, 0x08 /* Private */,
      48,    0,  585,    2, 0x08 /* Private */,
      49,    0,  586,    2, 0x08 /* Private */,
      50,    0,  587,    2, 0x08 /* Private */,
      51,    0,  588,    2, 0x08 /* Private */,
      52,    0,  589,    2, 0x08 /* Private */,
      53,    0,  590,    2, 0x08 /* Private */,
      54,    0,  591,    2, 0x08 /* Private */,
      55,    0,  592,    2, 0x08 /* Private */,
      56,    0,  593,    2, 0x08 /* Private */,
      57,    0,  594,    2, 0x08 /* Private */,
      58,    0,  595,    2, 0x08 /* Private */,
      59,    0,  596,    2, 0x08 /* Private */,
      60,    0,  597,    2, 0x08 /* Private */,
      61,    0,  598,    2, 0x08 /* Private */,
      62,    0,  599,    2, 0x08 /* Private */,
      63,    0,  600,    2, 0x08 /* Private */,
      64,    0,  601,    2, 0x08 /* Private */,
      65,    0,  602,    2, 0x08 /* Private */,
      66,    0,  603,    2, 0x08 /* Private */,
      67,    0,  604,    2, 0x08 /* Private */,
      68,    0,  605,    2, 0x08 /* Private */,
      69,    0,  606,    2, 0x08 /* Private */,
      70,    0,  607,    2, 0x08 /* Private */,
      71,    0,  608,    2, 0x08 /* Private */,
      72,    0,  609,    2, 0x08 /* Private */,
      73,    0,  610,    2, 0x08 /* Private */,
      74,    0,  611,    2, 0x08 /* Private */,
      75,    0,  612,    2, 0x08 /* Private */,
      76,    0,  613,    2, 0x08 /* Private */,
      77,    0,  614,    2, 0x08 /* Private */,
      78,    0,  615,    2, 0x08 /* Private */,
      79,    0,  616,    2, 0x08 /* Private */,
      80,    0,  617,    2, 0x08 /* Private */,
      81,    0,  618,    2, 0x08 /* Private */,
      82,    0,  619,    2, 0x08 /* Private */,
      83,    0,  620,    2, 0x08 /* Private */,
      84,    0,  621,    2, 0x08 /* Private */,
      85,    0,  622,    2, 0x08 /* Private */,
      86,    0,  623,    2, 0x08 /* Private */,
      87,    0,  624,    2, 0x08 /* Private */,
      88,    0,  625,    2, 0x08 /* Private */,
      89,    0,  626,    2, 0x08 /* Private */,
      90,    0,  627,    2, 0x08 /* Private */,
      91,    0,  628,    2, 0x08 /* Private */,
      92,    0,  629,    2, 0x08 /* Private */,
      93,    0,  630,    2, 0x08 /* Private */,
      94,    0,  631,    2, 0x08 /* Private */,
      95,    0,  632,    2, 0x08 /* Private */,
      96,    0,  633,    2, 0x08 /* Private */,
      97,    0,  634,    2, 0x08 /* Private */,
      98,    0,  635,    2, 0x08 /* Private */,
      99,    0,  636,    2, 0x08 /* Private */,
     100,    0,  637,    2, 0x08 /* Private */,
     101,    0,  638,    2, 0x08 /* Private */,
     102,    0,  639,    2, 0x08 /* Private */,
     103,    0,  640,    2, 0x08 /* Private */,
     104,    0,  641,    2, 0x08 /* Private */,
     105,    0,  642,    2, 0x08 /* Private */,
     106,    0,  643,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setDrvStrokeSBox(); break;
        case 1: _t->setDrvVelocSBox(); break;
        case 2: _t->setDrvStrokeSlider(); break;
        case 3: _t->setDrvVelocSlider(); break;
        case 4: _t->setDrvVelocZero(); break;
        case 5: _t->setDrvStrokeZero(); break;
        case 6: _t->sndDrvModeM(); break;
        case 7: _t->sndDrvModeP(); break;
        case 8: _t->sndDrvCModeS(); break;
        case 9: _t->sndDrvCModeV(); break;
        case 10: _t->sndDrvOModeON(); break;
        case 11: _t->sndDrvOModeOFF(); break;
        case 12: _t->sndDrvServoON(); break;
        case 13: _t->sndDrvServoOFF(); break;
        case 14: _t->sndDrvShiftD(); break;
        case 15: _t->sndDrvShiftN(); break;
        case 16: _t->sndDrvShiftP(); break;
        case 17: _t->sndDrvShiftR(); break;
        case 18: _t->sndDrvShiftB(); break;
        case 19: _t->sndDrvShiftS(); break;
        case 20: _t->setStrAngleSBox(); break;
        case 21: _t->setStrTorqueSBox(); break;
        case 22: _t->setStrAngleSlider(); break;
        case 23: _t->setStrTorqueSlider(); break;
        case 24: _t->setStrTorqueZero(); break;
        case 25: _t->setStrAngleZero(); break;
        case 26: _t->sndStrModeM(); break;
        case 27: _t->sndStrModeP(); break;
        case 28: _t->sndStrCModeA(); break;
        case 29: _t->sndStrCModeT(); break;
        case 30: _t->sndStrOModeON(); break;
        case 31: _t->sndStrOModeOFF(); break;
        case 32: _t->sndStrServoON(); break;
        case 33: _t->sndStrServoOFF(); break;
        case 34: _t->setBrkStrokeSBox(); break;
        case 35: _t->setBrkStrokeSlider(); break;
        case 36: _t->setBrkStrokeZero(); break;
        case 37: _t->sndBrkLampOn(); break;
        case 38: _t->sndBrkLampOff(); break;
        case 39: _t->sndBrkModeOn(); break;
        case 40: _t->sndBrkModeOff(); break;
        case 41: _t->sndBlinkerLeftOn(); break;
        case 42: _t->sndBlinkerLeftOff(); break;
        case 43: _t->sndBlinkerRightOn(); break;
        case 44: _t->sndBlinkerRightOff(); break;
        case 45: _t->SndDiagEngineReq(); break;
        case 46: _t->SndDiagEngineClear(); break;
        case 47: _t->SndDiagHVReq(); break;
        case 48: _t->SndDiagHVClear(); break;
        case 49: _t->SndDiagCruiseReq(); break;
        case 50: _t->SndDiagBattReq(); break;
        case 51: _t->SndDiagBattClear(); break;
        case 52: _t->SndErrReq(); break;
        case 53: _t->SndErrClear(); break;
        case 54: _t->SndVersionReq(); break;
        case 55: _t->GetConfStrGainKP(); break;
        case 56: _t->GetConfStrGainKI(); break;
        case 57: _t->GetConfStrGainKD(); break;
        case 58: _t->GetConfStrDecTime(); break;
        case 59: _t->GetConfStrWindow(); break;
        case 60: _t->GetConfStrPunch(); break;
        case 61: _t->GetConfStrMaxTrq(); break;
        case 62: _t->GetConfStrCCWFactor(); break;
        case 63: _t->GetConfVelocMaxSpeed(); break;
        case 64: _t->GetConfVelocGainKPP(); break;
        case 65: _t->GetConfVelocGainKPM(); break;
        case 66: _t->GetConfVelocWindowP(); break;
        case 67: _t->GetConfVelocWindowM(); break;
        case 68: _t->GetConfVelocPunchP(); break;
        case 69: _t->GetConfVelocPunchM(); break;
        case 70: _t->GetConfVelocMaxOutputP(); break;
        case 71: _t->GetConfVelocMaxOutputM(); break;
        case 72: _t->GetConfStrOverrideTh(); break;
        case 73: _t->GetConfAccOverrideTh(); break;
        case 74: _t->GetConfBrkOverrideTh(); break;
        case 75: _t->GetConfTestFlags(); break;
        case 76: _t->GetConfEmergencyBrakeRate(); break;
        case 77: _t->SetConfStrGainKP(); break;
        case 78: _t->SetConfStrGainKI(); break;
        case 79: _t->SetConfStrGainKD(); break;
        case 80: _t->SetConfStrDecTime(); break;
        case 81: _t->SetConfStrWindow(); break;
        case 82: _t->SetConfStrPunch(); break;
        case 83: _t->SetConfStrMaxTrq(); break;
        case 84: _t->SetConfStrCCWFactor(); break;
        case 85: _t->SetConfVelocMaxSpeed(); break;
        case 86: _t->SetConfVelocGainKPP(); break;
        case 87: _t->SetConfVelocGainKPM(); break;
        case 88: _t->SetConfVelocWindowP(); break;
        case 89: _t->SetConfVelocWindowM(); break;
        case 90: _t->SetConfVelocPunchP(); break;
        case 91: _t->SetConfVelocPunchM(); break;
        case 92: _t->SetConfVelocMaxOutputP(); break;
        case 93: _t->SetConfVelocMaxOutputM(); break;
        case 94: _t->SetConfStrOverrideTh(); break;
        case 95: _t->SetConfAccOverrideTh(); break;
        case 96: _t->SetConfBrkOverrideTh(); break;
        case 97: _t->SetConfTestFlags(); break;
        case 98: _t->SetConfEmergencyBrakeRate(); break;
        case 99: _t->SaveConfig(); break;
        case 100: _t->readLoop(); break;
        case 101: _t->sndDrvTarget(); break;
        case 102: _t->startLog(); break;
        case 103: _t->stopLog(); break;
        case 104: _t->setGameEnable(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "GameReceiveHandler"))
        return static_cast< GameReceiveHandler*>(this);
    if (!strcmp(_clname, "ChangeConfig"))
        return static_cast< ChangeConfig*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 105)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 105;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 105)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 105;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
