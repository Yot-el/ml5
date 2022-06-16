#include "ltime.h"
#include <QDebug>

LTime::LTime()
    :LTime(0, 0)
{

}

LTime::LTime(int hours, int minutes)
{
    this->hours = (hours + minutes / 60) % 24;
    this->minutes = minutes % 60;
}

LTime::LTime(const char *str)
{
    int m = ((str[3] - '0') * 10 + str[4] - '0');
    this->hours = (((str[0] - '0') * 10 + str[1] - '0') + m / 60) % 24;
    this->minutes = m % 60;
}

LTime LTime::operator +(int m)
{
    return LTime(this->hours, this->minutes + m);
}

int LTime::operator -(LTime t)
{
    return abs(this->hours*60 + this->minutes - (t.hours*60 + t.minutes));
}

void LTime::print()
{
    char time_arr[5] = {char(hours / 10 + '0'), char(hours % 10 + '0'), char(minutes / 10 + '0'), char(minutes % 10 + '0'), '\0'};

    qDebug("%c%c:%c%c", time_arr[0], time_arr[1], time_arr[2], time_arr[3]);
}

