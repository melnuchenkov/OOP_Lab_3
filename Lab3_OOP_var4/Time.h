#pragma once

#include <iostream>

using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;
public:
    // конструктори класу
    Time() { hour = minute = second = 0; };
    Time(int h, int m, int s); // конструктор з трьома параметрами
    ~Time() {};

    int GetHour() { return hour; } // повертає секунду
    int GetMinute() { return minute; } // повертає хвилину
    int GetSecond() { return second; } // повертає секунду

    void SetHour(int h);
    void SetMinute(int m);
    void SetSecond(int s);
    
    friend ostream& operator<<(ostream& out, const Time& obj);

    friend bool operator>=(Time& t1, Time& t2);
    void operator-=(const int n);
};


