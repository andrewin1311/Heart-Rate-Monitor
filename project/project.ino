#include "heart.h"
Heart test_heart = Heart(21, "Chase");
int pulse = 0;
#define HEARTBEAT_PIN 23
#define BUZZER_PIN 22
unsigned long start_time = 0;
unsigned long last_beat_time = 0;
const int duration = 10000;
unsigned long start = 0;
unsigned long interval = 0;
unsigned long lastbeat = 0;
unsigned long bpm = 0;
unsigned long starttime = 0;
unsigned long elapsedtime = 0;
unsigned long currenttime = 0;
unsigned long pulseInterval = 1;

void setup() {
  // put your setup code here, to run once:
  // test code
  Serial.begin(115200);
  delay(1000);
  Serial.println("Setup Initialized");
  pinMode(HEARTBEAT_PIN, INPUT);
  //pinMode(BUZZER_PIN, OUTPUT);
  start_time = millis();
  
}

void loop() {
  // digitalWrite(BUZZER_PIN, HIGH);
  // delay(500);
  // digitalWrite(BUZZER_PIN, LOW);
  // delay(500);
 //static int lastState = LOW;

int pulseState = digitalRead(HEARTBEAT_PIN);
if (pulseState == HIGH){
  currenttime = millis();
  pulseInterval = currenttime - lastbeat;
  if(pulseInterval > 300) {}
    if (pulseInterval == 0) {
      pulseInterval++;
    }
    bpm = 60000/pulseInterval;
    Serial.print("Heat Rate: ");
    Serial.print(bpm);
    Serial.println(" BPM");
    lastbeat = currenttime;
  }
}

  


  // put your main code here, to run repeatedly:
  /*
  int val = digitalRead(HEARTBEAT_PIN);
  if ((val == HIGH) && (lastState == LOW)) {
    if (now - last_beat_time > 300) {
        Serial.println("bpm updated");
        bpm++;
        Serial.println(bpm);
    }    
  }
  lastState = val;
  if (millis() - start_time >= duration) {
    int result = bpm * (60000 / duration);
    Serial.print("result -> ");
    Serial.println(result);


    bpm = 0;
    start_time = now;
  } 
}
*/