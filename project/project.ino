const int pulsePin = 34;  // GPIO34 for analog input
int threshold = 50;      // Threshold we have come to for a working approximation  (last time was 30)
unsigned long lastBeatTime = 0; // Time since the last Beat (heartbeat)
int beatCount = 0; // how many beats we have come across
unsigned long startTime = 0;

// The setup function is run once at the initialization
void setup() {
  Serial.begin(115200);
  startTime = millis();
}

// The loop function is run continously on the 
void loop() {
  int analogValue = analogRead(pulsePin);

  // Detect heart beat (avoid duplicates through time)
  if (analogValue > threshold && (millis() - lastBeatTime) > 250) {
    beatCount++;
    lastBeatTime = millis();
    Serial.println("Beat detected!");
  }

  // Every 10 seconds, calculate BPM
  if (millis() - startTime >= 10000) {
    float bpm = (beatCount / 10.0) * 60.0;
    Serial.print("BPM: ");
    Serial.println(bpm);
    beatCount = 0;
    startTime = millis();
  }

  delay(10);  // Small delay to reduce noise
}
