#include <iostream>
using namespace std;
double getWidth()
{
    double width;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    return width;
}

double getLength()
{
    double length;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    return length;
}

double getArea(double length, double width)
{
    return length * width;
}

void displayData(double length, double width, double area)
{
    cout << "The rectangle's length is: " << length << endl;
    cout << "The rectangle's width is: " << width << endl;
    cout << "The rectangle's area is: " << area << endl;
}

int main()
{
    double length = getLength();
    double width = getWidth();
    double area = getArea(length, width);
    displayData(length, width, area);
    return 0;
}
