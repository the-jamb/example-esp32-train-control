#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  // int result = myFunction(2, 3);

  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    digitalWrite(LED_BUILTIN, true);
    delay(1000);
    digitalWrite(LED_BUILTIN, false);
    delay(1000);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}