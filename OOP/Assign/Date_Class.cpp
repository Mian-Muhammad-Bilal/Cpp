#include <iostream>

using namespace std;

class Date
{
private:
    int month;
    int day;
    int year;

public:
    Date(int m, int d, int y)
    {
        month = (m >= 1 && m <= 12) ? m : 1;
        day = d;
        year = y;
    }

    void setMonth(int m)
    {
        month = (m >= 1 && m <= 12) ? m : 1;
    }

    int getMonth() const
    {
        return month;
    }

    void setDay(int d)
    {
        day = d;
    }

    int getDay() const
    {
        return day;
    }

    void setYear(int y)
    {
        year = y;
    }

    int getYear() const
    {
        return year;
    }

    void displayDate() const
    {
        cout << month << "/" << day << "/" << year << endl;
    }
};

int main()
{
    Date today(2, 14, 2024);

    cout << "Initial Date: ";
    today.displayDate();

    today.setMonth(5);
    today.setDay(1);
    today.setYear(2025);

    cout << "Updated Date: ";
    today.displayDate();

    return 0;
}
