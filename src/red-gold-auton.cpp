#include "vex.h"
#include "autons.h"
using namespace vex;

void redGoldAutonStart() {
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