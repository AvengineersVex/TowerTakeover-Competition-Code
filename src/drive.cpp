#include "vex.h"

using namespace vex;
extern controller Controller1;
extern motor RightDrive;
extern motor LeftDrive;
extern motor RightIntake;
extern motor LeftIntake;
extern motor IntakeLift;

int mainDrive() {
  RightDrive.spin(fwd);
  LeftDrive.spin(fwd);
  while (true) {
    while (abs(Controller1.Axis1.value()) > 20) {
      RightDrive.setVelocity(Controller1.Axis1.value() + 27, velocityUnits::pct);
      LeftDrive.setVelocity(Controller1.Axis1.value() + 27, velocityUnits::pct);
    }
    RightDrive.setVelocity(Controller1.Axis3.value(), velocityUnits::pct);
    LeftDrive.setVelocity(Controller1.Axis3.value(), velocityUnits::pct);
    wait(20, msec);
    while (Controller1.ButtonUp.pressing()) {
      IntakeLift.setVelocity(100, pct);
      IntakeLift.spin(fwd);
    }
    while (Controller1.ButtonDown.pressing()) {
      IntakeLift.setVelocity(100, pct);
      IntakeLift.spin(reverse);
    }
  }
  return 0;
}

int intakeTask() {
  while (true) {
    RightIntake.setVelocity(127, percentUnits::pct);
    LeftIntake.setVelocity(127, percentUnits::pct);
    while (Controller1.ButtonR1.pressing() && Controller1.ButtonL1.pressing()) {
      RightIntake.spin(fwd);
      LeftIntake.spin(fwd);
    }
    while (Controller1.ButtonR2.pressing() && Controller1.ButtonL2.pressing()) {
      RightIntake.spin(reverse);
      LeftIntake.spin(reverse);
    }
    RightIntake.stop();
    LeftIntake.stop();
    wait(20, msec);
  }
  return 0;
}
