#include "vex.h"

extern motor RightDrive;
extern motor LeftDrive;

void OneBlockPushStart() {
  RightDrive.setVelocity(127, pct);
  LeftDrive.setVelocity(127, pct);
  RightDrive.spin(fwd);
  LeftDrive.spin(fwd);
  wait(4, seconds);
  RightDrive.spin(reverse);
  LeftDrive.spin(reverse);
  wait(2, seconds);
  RightDrive.stop();
  LeftDrive.stop();
}