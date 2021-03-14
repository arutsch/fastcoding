#include <just.h>

just just(13);
void setup() {
  // put your setup code here, to run once:
  just.OU();
}

void loop() {
  // put your main code here, to run repeatedly:
  just.HI();
  delay(1000);
  just.LO();
  delay(1000);
}
