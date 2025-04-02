#ifndef UTILS_H
#define UTILS_h

class Heart {
  public:
    Heart();
    int get_heart_rate();
    double get_avg_heart_rate();

  private:
    int heart_rate;
    double average_heart_rate; 
    int monitor_time; // in seconds (could change)
}
#endif 