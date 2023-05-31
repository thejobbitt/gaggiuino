/* 09:32 15/03/2023 - change triggering comment */
#ifndef SENSORS_STATE_H
#define SENSORS_STATE_H

struct SensorState {
  bool brewSwitchState;
  bool steamSwitchState;
  bool hotWaterSwitchState;
  bool isSteamForgottenON;
  float temperature;          // °C
  /* calculated water temperature as wanted but not guaranteed
  due to boiler having a hard limit of 4ml/s heat capacity */
  float waterTemperature;     // °C
  float pressure;             // bar
  float pressureChangeSpeed;  // bar/s
  float pumpFlow;             // ml/s
  float pumpFlowChangeSpeed;  // ml/s^2
  float waterPumped;
  float weightFlow;
  float weight;
  float shotWeight;
  float smoothedPressure;
  float smoothedPumpFlow;
  float smoothedWeightFlow;
  float consideredFlow;
  long pumpClicks;
  uint16_t tofReading;
  uint16_t waterLvl;
};

struct SensorStateSnapshot {
  bool brewActive;
  bool steamActive;
  float temperature;
  float pressure;
  float pumpFlow;
  float weightFlow;
  float weight;
};

#endif
