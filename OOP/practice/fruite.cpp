#include <iostream>
using namespace std;
static int mangoes = 0, apples = 0, potatoes = 0, carrots = 0;
class Fruit_and_Vegetables
{
public:
    Fruit_and_Vegetables() {}
    void display()
    {
        cout << apples << " apples\n";
        cout << mangoes << " mangoes\n";
        cout << carrots << " carrots\n";
        cout << potatoes << " potatoes\n";
        cout << mangoes + apples << " fruits\n";
        cout << carrots + potatoes << " vegetables\n";
    }
};
class Apples
{
public:
    Apples()
    {
        apples++;
    }
};
class Mangoes
{
public:
    Mangoes()
    {
        mangoes++;
    }
};
class Carrots
{
public:
    Carrots()
    {
        carrots++;
    }
};
class Potato
{
public:
    Potato()
    {
        potatoes++;
    }
};
int main()
{
    Potato a, b, c, d;
    Carrots e, f, g, h;
    Apples i, j, k, l;
    Mangoes m, n, o, p;
    Fruit_and_Vegetables basket;
    basket.display();
    return 0;
}