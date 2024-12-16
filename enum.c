#include <stdio.h>

enum Level {
  OFF,
  ON
}; 

int main() {
  enum Level status = ON;
  (status == 0)?printf("The system is OFF\n"):
  (status == 1)?printf("The system is ON\n"):
  printf("Something Wrong!\n");
} 