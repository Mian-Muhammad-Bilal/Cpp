#include <iostream>
#include <cstring>
using namespace std;
class HugeInteger
{
private:
    char num[40];

public:
    HugeInteger(const char *input)
    {
        setInput(input);
    }

    void setInput(const char *input)
    {
        if (strlen(input) != 40)
        {
            cout << "Error: Input must be a 40-digit number." << endl;
            exit(1);
        }

        for (int i = 0; i < 40; ++i)
        {
            if (!isdigit(input[i]))
            {
                cout << "Error: Input must contain only digits." << endl;
                exit(1);
            }
        }

        strcpy(num, input);
    }

    void output() const
    {
        cout << num << endl;
    }

    // Overload += operator
    HugeInteger &operator+=(const HugeInteger &other)
    {
        int carry = 0;
        for (int i = 39; i >= 0; --i)
        {
            int sum = (num[i] - '0') + (other.num[i] - '0') + carry;
            num[i] = '0' + sum % 10;
            carry = sum / 10;
        }

        return *this;
    }

    // Overload -= operator
    HugeInteger &operator-=(const HugeInteger &other)
    {
        int borrow = 0;
        for (int i = 39; i >= 0; --i)
        {
            int diff = (num[i] - '0') - (other.num[i] - '0') - borrow;
            if (diff < 0)
            {
                diff += 10;
                borrow = 1;
            }
            else
            {
                borrow = 0;
            }
            num[i] = '0' + diff;
        }

        return *this;
    }

    // Overload *= operator
    HugeInteger &operator*=(const HugeInteger &other)
    {
        HugeInteger result("0");
        HugeInteger temp(*this);

        for (int i = 39; i >= 0; --i)
        {
            for (int j = 0; j < (other.num[i] - '0'); ++j)
            {
                result += temp;
            }
            temp.shiftLeft();
        }

        *this = result;

        return *this;
    }

    // Overload /= operator
    HugeInteger &operator/=(const HugeInteger &other)
    {
        if (other.isZero())
        {
            cout << "Error: Division by zero." << endl;
            exit(1);
        }

        HugeInteger quotient("0");
        HugeInteger temp(*this);

        while (temp >= other)
        {
            temp -= other;
            quotient += HugeInteger("1");
        }

        *this = quotient;

        return *this;
    }

    // Overloaded relational operators
    bool operator==(const HugeInteger &other) const
    {
        return strcmp(num, other.num) == 0;
    }

    bool operator!=(const HugeInteger &other) const
    {
        return !(*this == other);
    }

    bool operator>(const HugeInteger &other) const
    {
        return strcmp(num, other.num) > 0;
    }

    bool operator<(const HugeInteger &other) const
    {
        return strcmp(num, other.num) < 0;
    }

    bool operator>=(const HugeInteger &other) const
    {
        return !(*this < other);
    }

    bool operator<=(const HugeInteger &other) const
    {
        return !(*this > other);
    }

    // Overloaded XOR operator
    bool operator^(const HugeInteger &other) const
    {
        return isZero() && other.isZero();
    }

private:
    bool isZero() const
    {
        for (int i = 0; i < 40; ++i)
        {
            if (num[i] != '0')
            {
                return false;
            }
        }
        return true;
    }

    void shiftLeft()
    {
        for (int i = 0; i < 39; ++i)
        {
            num[i] = num[i + 1];
        }
        num[39] = '0';
    }
};

int main()
{
    HugeInteger num1("1234567891234567891234567891234567891234");
    HugeInteger num2("1111111111111111111111111111111111111111");

    // Test +=
    num1 += num2;
    cout << "num1 += num2: ";
    num1.output();

    // Test -=
    num1 -= num2;
    cout << "num1 -= num2: ";
    num1.output();

    // Test *=
    num1 *= HugeInteger("2");
    cout << "num1 *= 2: ";
    num1.output();

    // Test /=
    num1 /= HugeInteger("3");
    cout << "num1 /= 3: ";
    num1.output();

    // Test relational operators
    HugeInteger num3("1234567891234567891234567891234567891234");
    HugeInteger num4("1111111111111111111111111111111111111111");

    cout << "num3 == num4: " << (num3 == num4) << endl;
    cout << "num3 != num4: " << (num3 != num4) << endl;
    cout << "num3 > num4: " << (num3 > num4) << endl;
    cout << "num3 < num4: " << (num3 < num4) << endl;
    cout << "num3 >= num4: " << (num3 >= num4) << endl;
    cout << "num3 <= num4: " << (num3 <= num4) << endl;

    // Test XOR operator
    HugeInteger num5("0");
    HugeInteger num6("0");

    cout << "num5 ^ num6: " << (num5 ^ num6) << endl;

    return 0;
}
