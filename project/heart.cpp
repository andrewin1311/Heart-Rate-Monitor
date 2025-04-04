#include <iostream>
#include "heart.h"

using namespace std;

Heart::Heart(int u_age, string u_name) {
  heart_rate = 0;
  average_heart_rate = 0.0;
  monitor_time = 0;
  irregular = false;
  name = u_name;
  age = u_age;
  cout << "Hello World" << endl;

}

Heart::~Heart() {
  // Release memory, files, anything like that
  cout << "Final Statistics Gathered for [" << name << "]:\tHeart Rate - " << heart_rate <<" \t Average Heart Rate - " << average_heart_rate << " \tMonitored Time - " << monitor_time << endl;
}
int Heart::get_heart_rate() {
  return heart_rate;
}
double Heart::get_avg_heart_rate() {
  return average_heart_rate;
}