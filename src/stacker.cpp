#include "vex.h"

extern controller Controller1; 
extern motor PusherMotor;

int stackerStart() {
  while (true) {
    while (Controller1.ButtonX.pressing()) {
      PusherMotor.setVelocity(100, percentUnits::pct);
      PusherMotor.spin(fwd);
    }
    while (Controller1.ButtonB.pressing()) {
      PusherMotor.setVelocity(100, percentUnits::pct);
      PusherMotor.spin(reverse
      );
    }
    PusherMotor.stop();
  }
  return 0;
}