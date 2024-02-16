#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int roll_no;

public:
    float gpa;
    Student(string name, int roll_no, float gpa)
    {
        this->name = name;
        this->roll_no = roll_no;
        this->gpa = gpa;
    }
    void set_name(string name)
    {
        this->name = name;
    }
    string get_name() const
    {
        return name;
    }
    void set_roll_no(int roll_no)
    {
        this->roll_no = roll_no;
    }
    int get_roll_no() const
    {
        return roll_no;
    }
    void display() const
    {
        cout << "Student Name : " << name << endl;
        cout << "Roll Number : " << roll_no << endl;
        cout << "GPA : " << gpa << endl;
    }
};
int main()
{
    // Student stu("ali", 012, 4.0);
    Student *stp;
    stp = new Student("ali2", 012, 4.0);
    stp->display();
    Student *stp2;
    stp2 = new Student("ali3", 012, 4.0);
    stp2->display();
    // delete stp;
    // cout << "after delete";
    // stp->display();
    return 0;
}