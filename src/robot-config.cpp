#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;
brain::lcd Screen;

// VEXcode device constructors
motor RightDrive = motor(PORT1, ratio6_1, true);
motor LeftDrive = motor(PORT10, ratio6_1, false);
motor RightIntake = motor(PORT11, ratio6_1, false);
motor LeftIntake = motor(PORT13, ratio6_1, true);

controller Controller1 = controller(primary);
sonar Sonar = sonar(Brain.ThreeWirePort.G);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}