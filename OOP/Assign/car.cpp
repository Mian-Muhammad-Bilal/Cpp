#include <iostream>
#include <string>
using namespace std;

class Engine
{
private:
    int cylinders;
    int horsepower;

public:
    Engine(int cylinders, int horsepower)
    {
        this->cylinders = cylinders;
        this->horsepower = horsepower;
    }

    int getCylinders()
    {
        return cylinders;
    }
    int getHorsepower()
    {
        return horsepower;
    }

    void printInfo() const
    {
        cout << "Engine: " << cylinders << " cylinders, " << horsepower << " hp" << endl;
    }
};

class Chassis
{
private:
    string company;
    string chassisNumber;

public:
    Chassis(const string &company, const string &chassisNumber)
    {
        this->chassisNumber = chassisNumber;
        this->company = company;
    }

    const string &getCompany()
    {
        return company;
    }
    const string &getChassisNumber()
    {
        return chassisNumber;
    }

    void printInfo() const
    {
        cout << "Chassis: " << company << ", " << chassisNumber << endl;
    }
};

class Car
{
private:
    Engine engine;
    Chassis chassis;

public:
    Car(const Engine &engine, const Chassis &chassis) : engine(engine), chassis(chassis) {}

    void printInfo() const
    {
        engine.printInfo();
        chassis.printInfo();
    }
};

int main()
{
    Engine engine(4, 200);
    Chassis chassis("Honda", "ABC123");
    Car car(engine, chassis);

    car.printInfo();

    return 0;
}
