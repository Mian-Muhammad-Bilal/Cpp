#include <iostream>
using namespace std;

class KeyBoard
{
public:
    string CompanyName;
    int NumOfKeys;
    float Price;

    KeyBoard()
    {
        CompanyName = "";
        NumOfKeys = 0;
        Price = 0;
    }

    KeyBoard(string com, int nok, float pr)
    {
        CompanyName = com;
        NumOfKeys = nok;
        Price = pr;
    }

    ~KeyBoard() {}

    KeyBoard(const KeyBoard &obj)
    {
        this->CompanyName = obj.CompanyName;
        this->NumOfKeys = obj.NumOfKeys;
        this->Price = obj.Price;
    }

    void set_CompanyName(string nam)
    {
        CompanyName = nam;
    }

    void set_NumOfKeys(int n)
    {
        NumOfKeys = n;
    }

    void set_Price(float p)
    {
        Price = p;
    }

    string get_CompanyName()
    {
        return CompanyName;
    }

    int get_NumOfKeys()
    {
        return NumOfKeys;
    }

    float get_Price()
    {
        return Price;
    }

    void Display()
    {
        cout << "The CompanyName of KeyBoard is: " << CompanyName << endl;
        cout << "The NumberOfKeys of KeyBoard is: " << NumOfKeys << endl;
        cout << "The Price of KeyBoard is: " << Price << endl;
    }
};

class Moniter
{
public:
    string CompanyName;
    int siz;
    float Price;

    Moniter()
    {
        CompanyName = "";
        siz = 0;
        Price = 0;
    }

    Moniter(string nm, int s1, float p1)
    {
        CompanyName = nm;
        siz = s1;
        Price = p1;
    }

    ~Moniter() {}

    Moniter(const Moniter &obj)
    {
        this->CompanyName = obj.CompanyName;
        this->siz = obj.siz;
        this->Price = obj.Price;
    }

    void set_CompanyName(string nam1)
    {
        CompanyName = nam1;
    }

    void set_size(int s)
    {
        siz = s;
    }

    void set_Price(float p1)
    {
        Price = p1;
    }

    string get_CompanyName()
    {
        return CompanyName;
    }

    int get_size()
    {
        return siz;
    }

    float get_Price()
    {
        return Price;
    }

    void Display()
    {
        cout << "The CompanyName of Moniter is: " << CompanyName << endl;
        cout << "The size of Moniter is: " << siz << endl;
        cout << "The Price of Moniter is: " << Price << endl;
    }
};

class CPU
{
public:
    string CompanyName;
    int Speed;
    float Price;

    CPU()
    {
        CompanyName = "";
        Speed = 0;
        Price = 0;
    }

    CPU(string n, int ap, float pp)
    {
        CompanyName = n;
        Speed = ap;
        Price = pp;
    }

    ~CPU() {}

    CPU(const CPU &obj)
    {
        this->CompanyName = obj.CompanyName;
        this->Speed = obj.Speed;
        this->Price = obj.Price;
    }

    void set_CompanyName(string nam1)
    {
        CompanyName = nam1;
    }

    void set_Speed(int s)
    {
        Speed = s;
    }

    void set_Price(float p1)
    {
        Price = p1;
    }

    string get_CompanyName()
    {
        return CompanyName;
    }

    int get_Speed()
    {
        return Speed;
    }

    float get_Price()
    {
        return Price;
    }

    void Display()
    {
        cout << "The CompanyName of CPU is: " << CompanyName << endl;
        cout << "The Speed of CPU is: " << Speed << endl;
        cout << "The Price of CPU is: " << Price << endl;
    }
};

class Computer
{
public:
    Moniter moniter;
    CPU cpu;
    KeyBoard keyboard;

    Computer(Moniter m, CPU c, KeyBoard *k)
    {
        moniter = m;
        cpu = c;
        keyboard = *k;
    }

    void diplay()
    {
        moniter.Display();
        cpu.Display();
        keyboard.Display();
    }

    void operator++()
    {
        int currentSpeed = cpu.get_Speed();
        cpu.set_Speed(currentSpeed + 1);
    }
};

int main()
{
    Moniter m("Dell", 120, 10000.0);
    CPU c("OptiPlex 7040", 12, 100000);
    KeyBoard k("DELL", 12, 10000.0);

    Computer com(m, c, &k);
    cout << "Before using ++ overload operator";
    com.diplay();
    ++com;
    cout << "After using ++ overload operator";
    com.diplay();

    return 0;
}
