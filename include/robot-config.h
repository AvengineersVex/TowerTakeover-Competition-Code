using namespace vex;

extern brain Brain;

// VEXcode devices
extern sonar Sonar;
extern motor RightDrive;
extern motor LeftDrive;
extern motor Up1;
extern motor Up2;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );