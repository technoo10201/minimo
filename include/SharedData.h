//////------------------------------------
////// Manage settings exchanged in BLE and stored in EEPOM

#include "Arduino.h"
#include "MedianFilter.h"

#ifndef _SharedData_h

#define _SharedData_h

class SharedData
{
public:
    SharedData(){};

    uint32_t timeLastNotifyBle = 0;

    boolean inOtaMode = false;

    float currentHumidity = 0.0;
    float currentTemperature = 0.0;

    uint8_t speedLimiter = 1;

    uint8_t speedCurrent = 0;
    uint8_t speedOld = 0;
    uint8_t speedFake = 25;

    uint8_t powerReduction = 0;

    uint8_t modeOrder = 3;
    uint8_t modeLcd = 0;
    uint8_t modeLcdOld = 0;

    uint8_t accelOrder = 0;
    uint8_t accelLcd = 0;
    uint8_t accelLcdOld = 0;

    uint8_t ecoOrder = 3;
    uint8_t ecoLcd = 3;
    uint8_t ecoLcdOld = 3;

    uint8_t brakeStatus = 0;
    uint8_t brakeStatusOld = 0;
    int8_t breakeSentOrder = -1;
    uint8_t brakeLcd = 0;
    int8_t brakeLcdOld = -1;
    int8_t breakeSentOrderOld = -1;
    uint8_t button1 = 0;

    uint8_t currentCalibOrder = 1;

    uint8_t button1Status = 0;
    uint8_t button2Status = 0;

    uint32_t voltageFilterMean = 0;
    uint32_t currentFilterMean = 0;
};

#endif