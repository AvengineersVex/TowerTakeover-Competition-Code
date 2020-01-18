
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
#include "drive.h"

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
  // if (allianceSelect == 0 && autonSelect == 0) { // Red - Purple

  // }
  // else if (allianceSelect == 0 && autonSelect == 1) { // Red - Gold

  // }
  // else if (allianceSelect == 1 && autonSelect == 0) { // Blue - Purple

  // }
  // else if (allianceSelect == 1 && autonSelect == 0) { // Blue - Gold
  //   blueGoldAutonStart();
  // }
  // else {
    RightDrive.setVelocity(127, pct);
    LeftDrive.setVelocity(127, pct);
    RightDrive.spin(fwd);
    LeftDrive.spin(fwd);
    wait(1, seconds);
    RightDrive.spin(reverse);
    LeftDrive.spin(reverse);
    wait(1, seconds);
    RightDrive.stop();
    LeftDrive.stop();
  // }
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*---------------------------------------------------------------------------*/

void usercontrol(void) {
  while (1) {
    task intake(intakeTask, 1);
    mainDriveStart();
    wait(20, msec);
  }
}


int main () {
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  pre_auton();

  while (true) {
    wait(100, msec);
  }
}