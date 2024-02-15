#ifndef CLOCKTYPE_H
#define CLOCKTYPE_H
using namespace std;

class clockType
{
public:
    // Constructor
    clockType();                       // Default constructor
    clockType(int h, int m, int s);    // Parameterized constructor
    clockType(const clockType &other); // Copy constructor

    // Destructor
    ~clockType();

    // Member functions
    bool isValid() const;
    bool setClock();
    bool isEqual(const clockType &other) const;
    int difference(const clockType &other) const;
    void display() const;

private:
    int hour;
    int min;
    int sec;
};

#endif // CLOCKTYPE_H
