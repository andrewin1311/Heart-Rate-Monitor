// #include<iostream>
#include "heart.h"

// using namespace std;

Heart::Heart(int u_age, string u_name) {
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

void set_monitor_time(int time) {
  monitor_time = time;
}

void set_average_heart_rate(double average_rate) {
  average_heart_rate = average_rate;
}

void set_heart_rate(int rate) {
  heart_rate = rate;
}
