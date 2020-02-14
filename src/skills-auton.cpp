#include "vex.h"
#include "autons.h"

void skillsStart() {
  goForward();
  movething(directionType::fwd);
  wait(10, sec);
  stop();
  turnLeft();
  wait(10, msec);
  stop();
  goForward();
  wait(10, msec);
  movething(directionType::rev);
}