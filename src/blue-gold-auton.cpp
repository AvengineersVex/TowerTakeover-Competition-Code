#include "vex.h";
using namespace vex;

void go(directionType r, directionType l){
  RightDrive.setVelocity(100, velocityUnits::pct);
  LeftDrive.setVelocity(100, velocityUnits::pct);

  RightDrive.spin(r);
  LeftDrive.spin(l);
}

void movething(directionType a){
  Up1.setVelocity(100, velocityUnits::pct);
  Up2.setVelocity(100, velocityUnits::pct);

  Up1.spin(a);
  Up2.spin(a);
}

void goForward(){
  go(directionType::fwd, directionType::fwd);
}

void turnLeft(){
  go(directionType::rev, directionType::fwd);
}

void blueGoldAutonStart() {
  while (Sonar.distance(distanceUnits::in) <= 30){
    goForward();
    movething(directionType::fwd);
  }
  
  while (abs(Sonar.distance(distanceUnits::in) - 42.5) > 2.5){
    turnLeft();
  }

  while (Sonar.distance(distanceUnits::in) > 9){
    goForward();
  }
  movething(directionType::rev);
}