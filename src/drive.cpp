#include "vex.h";

using namespace vex;
extern controller Controller1;
extern motor RightDrive;
extern motor LeftDrive;

void mainDriveStart() {
  RightDrive.spin(fwd);
  LeftDrive.spin(fwd);
  while (true) {
    RightDrive.setVelocity(Controller1.Axis2.value(), velocityUnits::pct);
    LeftDrive.setVelocity(Controller1.Axis3.value(), velocityUnits::pct);
  }
}