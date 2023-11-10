//
// Created by imdl on 23/10/29.
//

#ifndef ZMP_CONTROL_MAINWINDOW_H
#define ZMP_CONTROL_MAINWINDOW_H
#include <QMainWindow>
#include <QGraphicsView>
#include <QtGui/QPixmap>
#include <QGraphicsPixmapItem>
#include <QFileDialog>
#include <QTimer>
#include <QTime>
#include <ctime>
#include <sys/time.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <pthread.h>
#include "HevCnt.h"
#include "GameControl.h"

namespace Ui {
    class MainWindow;
}
using namespace zmp::minivan;

class MainWindow : public QMainWindow, GameReceiveHandler, ChangeConfig
{
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    bool GameInit();
    bool GameStart();

protected:
    void changeEvent(QEvent *);
    void closeEvent(QCloseEvent *);

private slots:
    // drive slots
    void setDrvStrokeSBox();
    void setDrvVelocSBox();
    void setDrvStrokeSlider();
    void setDrvVelocSlider();
    void setDrvVelocZero();
    void setDrvStrokeZero();
    void sndDrvModeM();
    void sndDrvModeP();
    void sndDrvCModeS();
    void sndDrvCModeV();
    void sndDrvOModeON();
    void sndDrvOModeOFF();
    void sndDrvServoON();
    void sndDrvServoOFF();
    void sndDrvShiftD();
    void sndDrvShiftN();
    void sndDrvShiftP();
    void sndDrvShiftR();
    void sndDrvShiftB();
    void sndDrvShiftS();

    // steer slots
    void setStrAngleSBox();
    void setStrTorqueSBox();
    void setStrAngleSlider();
    void setStrTorqueSlider();
    void setStrTorqueZero();
    void setStrAngleZero();
    void sndStrModeM();
    void sndStrModeP();
    void sndStrCModeA();
    void sndStrCModeT();
    void sndStrOModeON();
    void sndStrOModeOFF();
    void sndStrServoON();
    void sndStrServoOFF();

    // brake slots
    void setBrkStrokeSBox();
    void setBrkStrokeSlider();
    void setBrkStrokeZero();

    void sndBrkLampOn();
    void sndBrkLampOff();
    void sndBrkModeOn();
    void sndBrkModeOff();
    void sndBlinkerLeftOn();
    void sndBlinkerLeftOff();
    void sndBlinkerRightOn();
    void sndBlinkerRightOff();

    // Diag slots
    void SndDiagEngineReq();
    void SndDiagEngineClear();
    void SndDiagHVReq();
    void SndDiagHVClear();
    void SndDiagCruiseReq();
    void SndDiagBattReq();
    void SndDiagBattClear();
    void SndErrReq();
    void SndErrClear();
    void SndVersionReq();

    void GetConfStrGainKP();
    void GetConfStrGainKI();
    void GetConfStrGainKD();
    void GetConfStrDecTime();
    void GetConfStrWindow();
    void GetConfStrPunch();
    void GetConfStrMaxTrq();
    void GetConfStrCCWFactor();
    void GetConfVelocMaxSpeed();
    void GetConfVelocGainKPP();
    void GetConfVelocGainKPM();
    void GetConfVelocWindowP();
    void GetConfVelocWindowM();
    void GetConfVelocPunchP();
    void GetConfVelocPunchM();
    void GetConfVelocMaxOutputP();
    void GetConfVelocMaxOutputM();
    void GetConfStrOverrideTh();
    void GetConfAccOverrideTh();
    void GetConfBrkOverrideTh();
    void GetConfTestFlags();
    void GetConfEmergencyBrakeRate();

    void SetConfStrGainKP();
    void SetConfStrGainKI();
    void SetConfStrGainKD();
    void SetConfStrDecTime();
    void SetConfStrWindow();
    void SetConfStrPunch();
    void SetConfStrMaxTrq();
    void SetConfStrCCWFactor();
    void SetConfVelocMaxSpeed();
    void SetConfVelocGainKPP();
    void SetConfVelocGainKPM();
    void SetConfVelocWindowP();
    void SetConfVelocWindowM();
    void SetConfVelocPunchP();
    void SetConfVelocPunchM();
    void SetConfVelocMaxOutputP();
    void SetConfVelocMaxOutputM();
    void SetConfStrOverrideTh();
    void SetConfAccOverrideTh();
    void SetConfBrkOverrideTh();
    void SetConfTestFlags();
    void SetConfEmergencyBrakeRate();

    void SaveConfig();

    // Timer loop
    void readLoop();
    void sndDrvTarget();

    void startLog();
    void stopLog();

    // Game slots
    void setGameEnable();

private:
    void viewBattInf();
    void viewBrakeInf();
    void viewOtherInf();
    void viewDrvInf();
    void viewStrInf();
    void viewErrCode();
    void viewFirmVersion();
    void updateTime();
    void writeLog();

    void logThread();
    static void* LogThreadEntry(void* arg);

    void OnGameJsReceive();
    void OnGameHidReceive();

    void UpdateConfig(int num, int index, int data[]);

    Ui::MainWindow *ui;

    QImage image;
    QGraphicsPixmapItem* pixmapItem;
    QGraphicsScene scene;
    QTimer timer;
    double scaleValue;

    QTimer *readTimer;
    QTimer *drvTimer;

    HevCnt* hev;
    BattInf _battInf;
    BrakeInf _brakeInf;
    OtherInf _otherInf;
    DrvInf _drvInf;
    StrInf _strInf;
    ConfigInf _config;
    int _errCode;
    int _errLevel;
    char _firm_version[9];
    GameData _gameData;

    struct tm *_s_time;
    time_t _day_time;
    QString _update;
    timeval _getTime;



    QString _logFileName;
    int _tmp[100];
    struct selectLogInf _selectLog;
    FILE* _logSave;

    pthread_t _logThread;

    GameController _Game;
    bool _gameRes;
    bool _gameEnable;


    int _drvTargetVeloc;
    int _drvTargetStroke;
};


#endif //ZMP_CONTROL_MAINWINDOW_H
