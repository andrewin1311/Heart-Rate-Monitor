#include "utils.h"

  // Heart constructor (testing)
  Heart() {
    heart_rate = 0;
    average_heart_rate = 0.0;
    monitor_time = 0;
  }
  int get_heart_rate() {
    return heart_rate;
  }
  double get_avg_heart_rate() {
    return average_heart_rate;
  }