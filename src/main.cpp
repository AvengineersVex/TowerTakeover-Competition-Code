// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// RightDrive           motor         1               
// LeftDrive            motor         10              
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// RightDrive           motor         1               
// ---- END VEXCODE CONFIGURED DEVICES ----
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       Avengineers Team                                          */
/*    Created:      Sat Oct 26 2019                                           */
/*    Description:  Avengineers 2019-2020 Competition Code Main File          */
/*                                                                            */
/*----------------------------------------------------------------------------*/


#include "vex.h"
#include "selector.h" 
#include "autons.h"

using namespace vex;

// A global instance of competition
competition Competition;

// define your global instances of motors and other devices here

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*---------------------------------------------------------------------------*/

void pre_auton(void) {
  vexcodeInit();
  startUp();
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*---------------------------------------------------------------------------*/

void autonomous(void) {
  int autonSelect = returnAutonSelection();
  int allianceSelect = returnAllianceSelection();
  if (allianceSelect == 0 && autonSelect == 0) { // Red - Purple

  }
  else if (allianceSelect == 0 && autonSelect == 1) { // Red - Gold

  }
  else if (allianceSelect == 1 && autonSelect == 0) { // Blue - Purple

  }
  else if (allianceSelect == 1 && autonSelect == 0) { // Blue - Gold
    blueGoldAutonStart();
  }
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*---------------------------------------------------------------------------*/

void usercontrol(void) {
  // User control code here, inside the loop
  while (1) {

    wait(20, msec);
  }
}

int main() {
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  pre_auton();

  while (true) {
    wait(100, msec);
  }
}