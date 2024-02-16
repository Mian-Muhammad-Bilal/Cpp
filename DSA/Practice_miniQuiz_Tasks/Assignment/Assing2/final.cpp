#include <iostream>
using namespace std;

class Fan
{


public:
    string wing, color;
    int price;
    Fan()
    {
        cout << "What is the price of fan?" << endl;
        cin >> price;
        cout << "How many wings dose fan have?" << endl;
        cin >> wing;
        cout << "What is the color of fan?" << endl;
        cin >> color;
    }
    void Air()
    {
        cout << "Fan throw air." << endl;
    }
    void decor()
    {
        cout << "Fan decorates the room." << endl;
    }
    void Display()
    {
        cout <<endl << "The price of fan is " << price << endl << "The color of fan is " << color << endl << "The number of wings of fan is " << wing << endl;
    }

};

class Door
{


public:
    string bname, color;
    int price;
    Door()
    {
        cout << "What is the price of Door?" << endl;
        cin >> price;
        cout << "What is the BRAND name of Door?" << endl;
        cin >> bname;
        cout << "What is the color of Door?" << endl;
        cin >> color;
    }
    void Enter()
    {
        cout << "We use door to enter in the room. " << endl;
    }
    void Protect()
    {
        cout << "Doors are also use as protection for the things inside room." << endl;
    }
    void Display()
    {
        cout<<endl << "The price of door is " << price << endl << "The color of Door is " << color << endl << "The Brand name of door is " << bname << endl;
    }

};

class Chair
{


public:
    string rot, color;
    int price;
    Chair()
    {
        cout << "What is the price of Chair?" << endl;
        cin >> price;
        cout << "Is the Chair rotatable?" << endl;
        cin >> rot;
        cout << "What is the color of chair?" << endl;
        cin >> color;
    }
    void sit()
    {
        cout << "Chair uses to sit on. " << endl;
    }
    void Put()
    {
        cout << "We can also use Chair to put different things on like books or laptop. " << endl;
    }
    void Display()
    {
        cout<<endl << "The price of chair is " << price << endl << "The color of chair is " << color << endl << "The chair is " << rot << endl;
    }

};

class Clock
{


public:
    string form, color;
    int price;
    Clock()
    {
        cout << "What is the price of clock?" << endl;
        cin >> price;
        cout << "What is the format of clock? 24/12" << endl;
        cin >> form;
        cout << "What is the color of clock?" << endl;
        cin >> color;
    }
    void time()
    {
        cout << "Clock tell us time. " << endl;
    }
    void Decor()
    {
        cout << "Clock also be uses to decorate the room. " << endl;
    }
    void Display()
    {
        cout<<endl << "The price of clock is " << price << endl << "The color of clock is " << color << endl << "the format of clock is " << form << endl;
    }

};

class Pen
{


public:
    string bname, color;
    int typ;
    Pen()
    {
        cout << "What is the type of pen?" << endl;
        cin >> typ;
        cout << "What is the BRAND name of pen?" << endl;
        cin >> bname;
        cout << "What is the color of pen?" << endl;
        cin >> color;
    }
    void write()
    {
        cout << "Pen uses to write. " << endl;
    }
    void Draw()
    {
        cout << "pen uses to draw. " << endl;
    }
    void Display()
    {
        cout<<endl << "The type of pen is " << typ << endl << "The color of pen is " << color << endl << "The Brand name of pen is " << bname << endl;
    }

};

class Student
{
public:
    string name;
    int id;
    float gpa;
    Student()
    {
        cout << "What is the Name of student?" << endl;
        cin >> name;
        cout << "What is the id of student?" << endl;
        cin >> id;
        cout << "What is the GPA of student?" << endl;
        cin >> gpa;
    }
    void write()
    {
        cout << "Student writes. " << endl;
    }
    void Study()
    {
        cout << "Student studies. " << endl;
    }
    void Display()
    {
        cout<<endl << "The name of Student is " << name << endl << "The ID of Student is " << id << endl << "The GPA of Student is " << gpa << endl;
    }

};

class Shirt
{
public:
    string bname, color;
    int price, size;
    Shirt()
    {
        cout << "What is the size of shirt?" << endl;
        cin >> size;
        cout << "What is the price of shirt?" << endl;
        cin >> price;
        cout << "What is the BRAND name of shirt?" << endl;
        cin >> bname;
        cout << "What is the color of shirt?" << endl;
        cin >> color;
    }
    void Fashion()
    {
        cout << "We wear shirt for fashion. " << endl;
    }
    void CoverBody()
    {
        cout << "We wear shirt to cover our body." << endl;
    }
    void Display()
    {
        cout<<endl << "The size of shirt is " << size << endl << "The price of shirt is " << price << endl << "The color of shirt is " << color << endl << "The Brand name of shirt is " << bname << endl;
    }

};

class Board
{
public:
    string siz, color;
    int price;
    Board()
    {
        cout << "What is the price of Board?" << endl;
        cin >> price;
        cout << "What is the size of Board?" << endl;
        cin >> siz;
        cout << "What is the color of Board?" << endl;
        cin >> color;
    }
    void write()
    {
        cout << "We use board to write on. " << endl;
    }
    void Draw()
    {
        cout << "We can draw on Board ." << endl;
    }
    void Display()
    {
        cout <<endl<< "The price of Board is " << price << endl << "The color of Board is " << color << endl << "the size of Board is " << siz << endl;
    }

};

class Mouse
{
public:
    string rgb, color;
    int price;
    Mouse()
    {
        cout << "What is the price of Mouse?" << endl;
        cin >> price;
        cout << "Is the Mouse RGB?" << endl;
        cin >> rgb;
        cout << "What is the color of Mouse?" << endl;
        cin >> color;
    }
    void operate()
    {
        cout << "We use Mouse to operate pc. " << endl;
    }
    void play()
    {
        cout << "We use Mouse to play games." << endl;
    }
    void Display()
    {
        cout <<endl<< "The price of Mouse is " << price << endl << "The color of Mouse is " << color << endl << "The Mouse is " << rgb << endl;
    }

};

class Keyboard
{
public:
    string bname, typ;
    int price;
    Keyboard()
    {
        cout << "What is the type Keyboard? Mechanical OR Flexible "  << endl;
        cin >> typ;
        cout << "What is the BRAND name of Keyboard?" << endl;
        cin >> bname;
        cout << "What is the price of Keyboard?" << endl;
        cin >> price;
    }
    void type()
    {
        cout << "We use Keyboard to type. " << endl;
    }
    void play()
    {
        cout << "We use Keyboard to play games." << endl;
    }
    void Display()
    {
        cout <<endl<< "The price of Keyboard is " << price << endl << "The Keyboard is " << typ << endl << "The Brand name of Keyboard is " << bname << endl;
    }

};

class Book
{
public:
    string bname, page;
    int price;
    Book()
    {
        cout << "What is the price of Book?" << endl;
        cin >> price;
        cout << "What is the BRAND name of Book?" << endl;
        cin >> bname;
        cout << "No. of pages?" << endl;
        cin >> page;
    }
    void Read()
    {
        cout << "We reads the Book. " << endl;
    }
    void learn()
    {
        cout << "We learns from Book." << endl;
    }
    void Display()
    {
        cout<<endl << "The price of Book is " << price << endl << "Book have " << page<<" No. of pages. " << endl << "The Brand name of Book is " << bname << endl;
    }

};

class Phone
{
public:
    string type, color;
    int price;
    Phone()
    {
        cout << "What is the price of Phone?" << endl;
        cin >> price;
        cout << "Is the phone touch or keypad" << endl;
        cin >> type;
        cout << "What is the color of Phone?" << endl;
        cin >> color;
    }
    void calls()
    {
        cout << "We can make calls by. " << endl;
    }
    void Play()
    {
        cout << "We can play games" << endl;
    }
    void Display()
    {
        cout <<endl<< "The price of Phone is " << price << endl << "The color of Phone is " << color << endl << "The type of Phone is " << type << endl;
    }

};

class Computer
{
public:
    string bname, color;
    int price;
    Computer()
    {
        cout << "What is the price of Computer?" << endl;
        cin >> price;
        cout << "What is the BRAND name of Computer?" << endl;
        cin >> bname;
        cout << "What is the color of Computer?" << endl;
        cin >> color;
    }
    void play()
    {
        cout << "We can play videos and games on Computer. " << endl;
    }
    void work()
    {
        cout << "We can preform different tasks on Computer." << endl;
    }
    void Display()
    {
        cout<<endl << "The price of Computer is " << price << endl << "The color of Computer is " << color << endl << "The Brand name of Computer is " << bname << endl;
    }

};

class USB
{
public:
    string bname, mem;
    int price;
    USB()
    {
        cout << "What is the price of USB?" << endl;
        cin >> price;
        cout << "What is the BRAND name of USB?" << endl;
        cin >> bname;
        cout << "What is the size of USB? (in GB)" << endl;
        cin >> mem;
    }
    void DataTransfer()
    {
        cout << "We can  transfer  data from one computer to other via using USB. " << endl;
    }
    void Boot()
    {
        cout << "We can boot operating systems via using USB." << endl;
    }
    void Display()
    {
        cout <<endl<< "The price of USB is " << price << endl << "The memory capacity of USB is " << mem << endl << "The Brand name of USB is " << bname << endl;
    }

};

class Glass
{
public:
    string bname, color;
    int price;
    Glass()
    {
        cout << "What is the price of Glass?" << endl;
        cin >> price;
        cout << "What is the BRAND name of Glass?" << endl;
        cin >> bname;
        cout << "What is the color of Glass?" << endl;
        cin >> color;
    }
    void SeeThrow()
    {
        cout << "We can see throw the Glass. " << endl;
    }
    void Windows()
    {
        cout << "Mostly room windows are make of glass look beautiful." << endl;
    }
    void Display()
    {
        cout<<endl << "The price of Glass is " << price << endl << "The color of Glass is " << color << endl << "The Brand name of Glass is " << bname << endl;
    }

};

class Bottle
{
public:
    string bname, color;
    int price;
    Bottle()
    {
        cout << "What is the price of Bottle?" << endl;
        cin >> price;
        cout << "What is the BRAND name of Bottle?" << endl;
        cin >> bname;
        cout << "What is the color of Bottle?" << endl;
        cin >> color;
    }
    void Store()
    {
        cout << "We can store liquids in Bottle " << endl;
    }
    void Transport()
    {
        cout << "Bottle are also uses to transort liquids." << endl;
    }
    void Display()
    {
        cout <<endl<< "The price of Bottle is " << price << endl << "The color of Bottle is " << color << endl << "The Brand name of Bottle is " << bname << endl;
    }

};

class Water
{
public:
    string miniral,chilled,clean;
    Water()
    {
        cout << "is the Water is miniral?" << endl;
        cin >> miniral;
        cout << "Is Water chilled?" << endl;
        cin >> chilled;
        cout << "Is Water clean or dirty?" << endl;
        cin >> clean;
    }
    void Drink()
    {
        cout << "We drink water " << endl;
    }
    void Wash()
    {
        cout << "We wash things with water." << endl;
    }
    void Display()
    {
        cout<<endl << "The water is " << miniral << endl << "The water is  " << chilled << endl << "The water is " << clean << endl;
    }

};

class Air_Conditioner
{
public:
    string model, bname, color;
    int price;
    Air_Conditioner()
    {
        cout << "Is Air_Conditioner DC or Inverter?" << endl;
        cin >> model;
        cout << "What is the price of Air_Conditioner?" << endl;
        cin >> price;
        cout << "What is the BRAND name of Air_Conditioner?" << endl;
        cin >> bname;
        cout << "What is the color of Air_Conditioner?" << endl;
        cin >> color;
    }
    void cold()
    {
        cout << "Air_Conditioner provides cold air in summer " << endl;
    }
    void warm()
    {
        cout << "Air_Conditioner provides warm air in winter." << endl;
    }
    void Display()
    {
        cout <<endl<< "The price of Air_Conditioner is " << price << endl << "The color of Air_Conditioner is " << color << endl << "The Brand name of Air_Conditioner is " << bname << "The Air_Conditioner is " << model << endl;
    }

};

class Shose
{
public:
    string bname, color;
    int price;
    Shose()
    {
        cout << "What is the price of Shose?" << endl;
        cin >> price;
        cout << "What is the BRAND name of Shose?" << endl;
        cin >> bname;
        cout << "What is the color of Shose?" << endl;
        cin >> color;
    }
    void Wear()
    {
        cout << "We wear shose. " << endl;
    }
    void protect()
    {
        cout << "shose protect our feet." << endl;
    }
    void Display()
    {
        cout <<endl<< "The price of Shose is " << price << endl << "The color of Shose is " << color << endl << "The Brand name of Shose is " << bname << endl;
    }

};

class Data_Cable
{
public:
    string bname, lenth;
    int price;
    Data_Cable()
    {
        cout << "What is the price of Data Cable?" << endl;
        cin >> price;
        cout << "What is the BRAND name of Data Cable?" << endl;
        cin >> bname;
        cout << "What is the length of Data Cable?(in cm)" << endl;
        cin >> lenth;
    }
    void Datatransfer()
    {
        cout << "Data Cable uses to transfer data. " << endl;
    }
    void charge()
    {
        cout << "Data Cable uses to charge devices." << endl;
    }
    void Display()
    {
        cout <<endl<< "The price of Data Cable is " << price << endl << "The length of Data Cable is " << lenth << endl << "The Brand name of Data Cable is " << bname << endl;
    }

};


int main()
{
    Fan f;
    f.Display();
    Door doo;
    doo.Display();
    Chair ch;
    ch.Display();
    Clock clo;
    clo.Display();
    Pen pen;
    pen.Display();
    Student s1;
    s1.Display();
    Shirt s;
    s.Display();
    Board bor;
    bor.Display();
    Mouse m;
    m.Display();
    Keyboard k;
    k.Display();
    Book book;
    book.Display();
    Phone p;
    p.Display();
    Computer co;
    co.Display();
    USB u;
    u.Display();
    Glass g;
    g.Display();
    Bottle b;
    b.Display();
    Water w;
    w.Display();
    Air_Conditioner a;
    a.Display();
    Shose sho;
    sho.Display();
    Data_Cable c;
    c.Display();
    return 0;
}
