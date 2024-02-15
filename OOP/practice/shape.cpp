#include <iostream>
using namespace std;
class Shape
{
public:
    Shape() {}
    virtual void print()
    {
        cout << "\nThis is a shape.";
    }
};
class Polygon : public Shape
{
public:
    Polygon() {}
    void print()
    {
        cout << "\nPolygon is a shape.";
    }
};
class Rectangle : public Polygon
{
public:
    Rectangle() {}
    void print()
    {
        cout << "\nRectangle is a Polygon.";
    }
};
class Triangle : public Polygon
{
public:
    Triangle() {}
    void print()
    {
        cout << "\nTriangle is a Polygon.";
    }
};
class Square : public Rectangle
{
public:
    Square() {}
    void print()
    {
        cout << "\nSquare is a Rectangle.";
    }
};
int main()
{
    Shape S;
    Polygon P;
    Rectangle R;
    Triangle T;
    Square Sq;
    S.print();
    P.print();
    R.print();
    T.print();
    Sq.print();
    return 0;
}