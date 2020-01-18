#include "vex.h"
#include "autons.h"
using namespace vex;

void go(directionType r, directionType l){
  RightDrive.setVelocity(100, velocityUnits::pct);
  LeftDrive.setVelocity(100, velocityUnits::pct);

  RightDrive.spin(r);
  LeftDrive.spin(l);
}

void movething(directionType a){
  RightIntake.setVelocity(100, velocityUnits::pct);
  LeftIntake.setVelocity(100, velocityUnits::pct);

  RightIntake.spin(a);
  LeftIntake.spin(a);
}

void goForward(){
  go(directionType::fwd, directionType::fwd);
}

void turnLeft(){
  go(directionType::rev, directionType::fwd);
}

void stop(){
  RightDrive.stop();
  LeftDrive.stop();
  RightIntake.stop();
  LeftIntake.stop();
}

void blueGoldAutonStart() {
  while (Sonar.distance(distanceUnits::in) <= 30){
    goForward();
    movething(directionType::fwd);
  }
  
  stop();

  while (abs((int) (Sonar.distance(distanceUnits::in) - 42.5)) > 2.5){
    turnLeft();
  }

  stop();

  while (Sonar.distance(distanceUnits::in) > 9){
    goForward();
  }

  stop();
  
  movething(directionType::rev);
}