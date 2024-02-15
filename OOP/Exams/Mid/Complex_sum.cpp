#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    void setvalue();
    void display() const;
    Complex sum(const Complex &c1, const Complex &c2) const;
};

void Complex::setvalue()
{
    cout << "Enter real part: ";
    cin >> real;
    cout << "Enter imaginary part: ";
    cin >> imag;
}

void Complex::display() const
{
    cout << real << ((imag >= 0) ? "+" : "") << imag << "i" << endl;
}

Complex Complex::sum(const Complex &c1, const Complex &c2) const
{
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main()
{
    Complex c1, c2, c3;

    cout << "Enter real and imaginary part of first complex number" << endl;
    c1.setvalue();

    cout << "Enter real and imaginary part of second complex number" << endl;
    c2.setvalue();

    cout << "Sum of two complex numbers is" << endl;
    c3 = c3.sum(c1, c2);
    c3.display();

    return 0;
}
