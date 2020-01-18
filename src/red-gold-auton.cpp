#include "vex.h"
#include "autons.h"
using namespace vex;

void redGoldAutonStart() {
  while (Sonar.distance(distanceUnits::in) <= 30){
    goForward();
    movething(directionType::fwd);
  }
  
  while (abs((int) (Sonar.distance(distanceUnits::in) - 42.5)) > 2.5){
    turnLeft();
  }

  while (Sonar.distance(distanceUnits::in) > 9){
    goForward();
  }
  movething(directionType::rev);
}