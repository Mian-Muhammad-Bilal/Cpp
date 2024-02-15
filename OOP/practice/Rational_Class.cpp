#include <iostream>
using namespace std;
class Rational
{
private:
    int numerator;
    int denominator;

public:
    Rational();
    Rational(int num, int den);
    Rational add(const Rational &other) const;
    Rational subtract(const Rational &other) const;
    Rational multiply(const Rational &other) const;
    Rational divide(const Rational &other) const;
    void printFraction() const;
    void printFloatingPoint() const;
    void setNumerator(int num);
    void setDenominator(int den);
    int getNumerator() const;
    int getDenominator() const;
    void simplify();
    ~Rational() {}
};
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
Rational::Rational(int num, int den)
{
    if (den == 0)
    {
        cout << "Error: Denominator cannot be zero. Setting fraction to 0/1." << endl;
        numerator = 0;
        denominator = 1;
    }
    else
    {
        numerator = num;
        denominator = den;
        simplify();
    }
}

Rational Rational::add(const Rational &other) const
{
    int resultNumerator = (numerator * other.denominator) + (other.numerator * denominator);
    int resultDenominator = denominator * other.denominator;
    return Rational(resultNumerator, resultDenominator);
}

Rational Rational::subtract(const Rational &other) const
{
    int resultNumerator = (numerator * other.denominator) - (other.numerator * denominator);
    int resultDenominator = denominator * other.denominator;
    return Rational(resultNumerator, resultDenominator);
}

Rational Rational::multiply(const Rational &other) const
{
    int resultNumerator = numerator * other.numerator;
    int resultDenominator = denominator * other.denominator;
    return Rational(resultNumerator, resultDenominator);
}

Rational Rational::divide(const Rational &other) const
{
    if (other.numerator == 0)
    {
        cout << "Error: Division by zero. Setting result to 0/1." << endl;
        return Rational(0, 1);
    }
    int resultNumerator = numerator * other.denominator;
    int resultDenominator = denominator * other.numerator;
    return Rational(resultNumerator, resultDenominator);
}

void Rational::printFraction() const
{
    cout << numerator << "/" << denominator;
}

void Rational::printFloatingPoint() const
{
    double result = static_cast<double>(numerator) / denominator;
    cout << result;
}

void Rational::setNumerator(int num)
{
    numerator = num;
}

void Rational::setDenominator(int den)
{
    if (den != 0)
    {
        denominator = den;
        simplify();
    }
    else
    {
        cout << "Error: Denominator cannot be zero. Fraction remains unchanged." << endl;
    }
}

int Rational::getNumerator() const
{
    return numerator;
}

int Rational::getDenominator() const
{
    return denominator;
}

void Rational::simplify()
{
    int commonDivisor = gcd(numerator, denominator);
    numerator /= commonDivisor;
    denominator /= commonDivisor;
}

int main()
{
    Rational fraction1(1, 2);
    Rational fraction2(3, 4);

    Rational resultAdd = fraction1.add(fraction2);
    cout << "Addition Result: ";
    resultAdd.printFraction();
    cout << " (";
    resultAdd.printFloatingPoint();
    cout << ")" << endl;

    Rational resultSubtract = fraction1.subtract(fraction2);
    cout << "Subtraction Result: ";
    resultSubtract.printFraction();
    cout << " (";
    resultSubtract.printFloatingPoint();
    cout << ")" << endl;

    Rational resultMultiply = fraction1.multiply(fraction2);
    cout << "Multiplication Result: ";
    resultMultiply.printFraction();
    cout << " (";
    resultMultiply.printFloatingPoint();
    cout << ")" << endl;

    Rational resultDivide = fraction1.divide(fraction2);
    cout << "Division Result: ";
    resultDivide.printFraction();
    cout << " (";
    resultDivide.printFloatingPoint();
    cout << ")" << endl;

    return 0;
}