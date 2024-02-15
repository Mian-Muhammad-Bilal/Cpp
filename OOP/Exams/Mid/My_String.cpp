#include <iostream>
#include <cstring>

using namespace std;

class MyString
{
private:
    char *data;
    int size;
    int current;

public:
    MyString();

    char *getData() const;
    void setData(const char *newData);
    MyString(const char *other);
    MyString concatenate(const MyString &other) const;
    void exchange(MyString &other);
    void toLowerCase();
    void toUpperCase();
    int compare(const MyString &other) const;

    ~MyString();
};

MyString::MyString() : size(10), current(0)
{
    data = new char[size];
    data[0] = '\0';
}

MyString::~MyString()
{
    delete[] data;
}

char *MyString::getData() const
{
    return data;
}

void MyString::setData(const char *newData)
{
    delete[] data;
    size = strlen(newData) + 1;
    data = new char[size];
    strcpy(data, newData);
    current = size - 1;
}

MyString::MyString(const char *other) : size(strlen(other) + 1), current(strlen(other))
{
    data = new char[size];
    strcpy(data, other);
}

MyString MyString::concatenate(const MyString &other) const
{
    MyString result;
    result.setData(strcat(data, other.data));
    return result;
}

void MyString::exchange(MyString &other)
{
    swap(data, other.data);
    swap(size, other.size);
    swap(current, other.current);
}

void MyString::toLowerCase()
{
    for (int i = 0; i < size; ++i)
    {
        data[i] = tolower(data[i]);
    }
}

void MyString::toUpperCase()
{
    for (int i = 0; i < size; ++i)
    {
        data[i] = toupper(data[i]);
    }
}

int MyString::compare(const MyString &other) const
{
    return strcmp(data, other.data);
}

int main()
{
    MyString str1, str2("Hello"), str3(str2);

    cout << "Data of str1: " << str1.getData() << endl;
    str1.setData("World");
    cout << "Updated data of str1: " << str1.getData() << endl;

    MyString str4 = str1;
    cout << "Data of str4: " << str4.getData() << endl;

    MyString str5 = str2.concatenate(str3);
    cout << "Concatenated data of str2 and str3: " << str5.getData() << endl;

    str1.exchange(str2);
    cout << "After swapping, data of str1: " << str1.getData() << ", data of str2: " << str2.getData() << endl;

    str1.toLowerCase();
    cout << "After toLowerCase(), data of str1: " << str1.getData() << endl;

    str1.toUpperCase();
    cout << "After toUpperCase(), data of str1: " << str1.getData() << endl;
    cout << "Comparison result between str1 and str2: " << str1.compare(str2) << endl;

    return 0;
}
