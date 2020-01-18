#include "vex.h"
#include "autons.h"
using namespace vex;

void redPurpleAutonStart() {
    float prev_dist = Sonar.distance(distanceUnits::in);
    bool t = false;
    while (Sonar.distance(distanceUnits::in) <= 24){
      goForward();
      movething(directionType::fwd);
    }
    while (abs((int) (Sonar.distance(distanceUnits::in) - 35)) > 5){
      turnLeft();
    }
    while (Sonar.distance(distanceUnits::in) > 10 && t){
      prev_dist = Sonar.distance(distanceUnits::in);
      goForward();
      movething(directionType::fwd);
      if (prev_dist < Sonar.distance(distanceUnits::in)){
        t = true;
      }
    }
    movething(directionType::rev);
}