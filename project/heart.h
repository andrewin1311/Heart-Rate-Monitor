#ifndef HEART_H
#define HEART_H
#include <iostream>

class Heart {
  public:
    Heart(int age, std::string name);
    ~Heart();
    int get_heart_rate();
    double get_avg_heart_rate();
    int get_monitor_time();
    void set_monitor_time();
    void set_average_heart_rate();
    void set_heart_rate();
    std::string get_name();
    int get_age();
    void set_name();
    void set_age();

  private:
    int heart_rate;
    double average_heart_rate; 
    int monitor_time; // in seconds (could change)
    bool irregular;
    std::string name;
    int age;
};
#endif 