#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;
brain::lcd Screen;

// VEXcode device constructors
motor RightDrive = motor(PORT14, ratio18_1, true);
motor LeftDrive = motor(PORT7, ratio18_1, false);
motor RightIntake = motor(PORT13, ratio6_1, true);
motor LeftIntake = motor(PORT11, ratio6_1, false);
motor PusherMotor = motor(PORT8, ratio36_1, true);
motor RightIntakeLift = motor(PORT9, ratio36_1, true);
motor LeftIntakeLift = motor(PORT10, ratio36_1, false);

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
