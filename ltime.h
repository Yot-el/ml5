#ifndef LTIME_H
#define LTIME_H


class LTime
{
public:
    LTime();
    LTime(int hours, int minutes);
    LTime(const char *str);

    LTime operator +(int m);
    int operator -(LTime t);

    void print();

private:
    int hours, minutes;
};

#endif // LTIME_H
