#include "vex.h"

using namespace vex;
extern controller Controller1;
extern motor RightDrive;
extern motor LeftDrive;
extern motor RightIntake;
extern motor LeftIntake;

void mainDriveStart() {
  RightDrive.spin(fwd);
  LeftDrive.spin(fwd);
  while (true) {
    RightDrive.setVelocity(Controller1.Axis2.value(), velocityUnits::pct);
    LeftDrive.setVelocity(Controller1.Axis3.value(), velocityUnits::pct);
  }
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
  }
  return 0;
}