#include "clockType.h"
#include <iostream>
#include <cstdlib>

using namespace std;

clockType::clockType() : hour(0), min(0), sec(0)
{
}

clockType::clockType(int h, int m, int s) : hour(h), min(m), sec(s)
{
}

clockType::clockType(const clockType &other) : hour(other.hour), min(other.min), sec(other.sec)
{
}

clockType::~clockType()
{
}

bool clockType::isValid() const
{
    return (hour >= 0 && hour < 12 && min >= 0 && min < 60 && sec >= 0 && sec < 60);
}

bool clockType::setClock()
{
    cout << "Enter hour (0-11): ";
    cin >> hour;
    cout << "Enter minute (0-59): ";
    cin >> min;
    cout << "Enter second (0-59): ";
    cin >> sec;

    if (isValid())
    {
        cout << "Clock set successfully." << endl;
        return true;
    }
    else
    {
        cout << "Invalid time. Please enter valid values." << endl;
        return setClock();
    }
}

bool clockType::isEqual(const clockType &other) const
{
    return (hour == other.hour && min == other.min && sec == other.sec);
}

int clockType::difference(const clockType &other) const
{
    int thisSeconds = hour * 3600 + min * 60 + sec;
    int otherSeconds = other.hour * 3600 + other.min * 60 + other.sec;

    return abs(thisSeconds - otherSeconds);
}

void clockType::display() const
{
    cout << "Time: " << hour << ":" << min << ":" << sec << endl;
}
