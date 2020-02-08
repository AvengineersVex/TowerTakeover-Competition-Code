#include "vex.h"

extern controller Controller1; 
extern motor PusherMotor;

int stackerStart() {
  while (true) {
    PusherMotor.setVelocity(50, percentUnits::pct);
    while (Controller1.ButtonX.pressing()) {
      PusherMotor.spin(fwd);
    }
    while (Controller1.ButtonB.pressing()) {
      PusherMotor.spin(reverse);
    }
    PusherMotor.stop();
    wait(20, msec);
  }
  return 0;
}