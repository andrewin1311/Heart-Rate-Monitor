#include "heart.h"

// using namespace std;

Heart::Heart(int u_age, std::string u_name) {
  heart_rate = 0;
  average_heart_rate = 0.0;
  monitor_time = 0;
  irregular = false;
  name = u_name;
  age = u_age;
  Serial.println("Heart monitor initialized");
}

Heart::~Heart() {
  Serial.print("Final Statistics for [");
  Serial.print(name.c_str()); // Arduino way to convert std::string to print. 
  Serial.print("]: Heart Rate - ");
  Serial.print(heart_rate);
  Serial.print(", Average Heart Rate - ");
  Serial.print(average_heart_rate);
  Serial.print(", Monitored Time - ");
  Serial.println(monitor_time);
}

int Heart::get_heart_rate() {
  return heart_rate;
}

double Heart::get_avg_heart_rate() {
  return average_heart_rate;
}

void Heart::set_monitor_time(int time) {
  monitor_time = time;
}

void Heart::set_average_heart_rate(double average_rate) {
  average_heart_rate = average_rate;
}

void Heart::set_heart_rate(int rate) {
  heart_rate = rate;
}
// Chase Q - Function to wait x amount of seconds, this is useful for measuring a heart rate for a user as 
// typically we can get a good measure after of analyzing. Typically a minute is good for measuring 
// 1 minute = 60_000 milli_seconds
void wait_x_seconds(int milli_seconds) {
  unsigned int start = millis();
  unsigned int current = 0;
  unsigned int elapsed = 0;
  while (true) {
    current = millis();
    elapsed = current - start;
    if (elapsed >= milli_seconds) {
      return;
    }
  }
}

bool normal_heart_rate(double average_heart_rate) {
  if (average_heart_rate < 60) {
    // Heart rate too low
  } else if (average_heart_rate > 100) {
    // Heart rate too high 
  } 
}


