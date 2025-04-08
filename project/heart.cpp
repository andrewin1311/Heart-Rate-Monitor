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

// Patrick M
/** measure_for_seconds: Int -> Void
*   Takes in a specified time (in seconds), and records heart rate during that time. Placedholder
*   until we know the actual sensor logic
*/
void Heart::measure_for_seconds(int seconds) {
  Serial.print("Measuring heart rate for ");
  Serial.print(seconds);
  Serial.println(" seconds...");
  wait_x_seconds(seconds * 1000);
  // Need to edit, just simulation for now...
  int simulated_rate = random(50, 140);  // Replace random with actual sensor logic later!
  set_heart_rate(simulate_rate);
  Serial.print("Heart rate measured: ");
  Serial.println(simulated_rate);
  if (normal_heart_rate()) {
    Serial.println ("Your heart-rate is normal!");
  } else {
    Serial.println ("Your heart-rate is NOT normal!");
  }
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
  // If betwen 60 and 100, will return True (Patrick McDonald)
  return (get_avg_heart_rate() >= 60 && get_avg_heart_rate() <= 100); 
}


