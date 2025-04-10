#include "heart.h"
Heart test_heart = Heart(21, "Chase");
void setup() {
  // put your setup code here, to run once:
  // test code
  Serial.begin(115200);
  delay(1000);
  Serial.println("Setup Initialized");
  test_heart.set_heart_rate(75);
  Serial.print(test_heart.get_heart_rate()); 

}

void loop() {
  // put your main code here, to run repeatedly:
  
}
