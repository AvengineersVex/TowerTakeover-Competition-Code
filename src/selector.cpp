#include "vex.h";
using namespace vex;

extern brain Brain;
extern brain::lcd Screen;

void startUp() {
  Screen.setCursor(10,10);
  Screen.setPenWidth(20);
  Screen.print("test");
}