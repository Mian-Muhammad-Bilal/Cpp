#include <iostream>
#include <list>
using namespace std;
void diaplay(list<int> &l)
{
    list<int>::iterator i;
    for (i = l.begin(); i != l.end(); i++)
    {
        cout << *i << "->";
    }
    cout << "NULL" << endl;
}
int main()
{
    list<int> l1;
    list<int> l2;
    list<int>::iterator i;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_front(0);
    l1.push_front(10);
    l1.push_front(40);
    diaplay(l1);
    l1.sort();
    diaplay(l1);
    l2.push_front(1);
    l2.push_front(6);
    l2.push_front(8);
    l2.push_front(7);
    l1.push_back(5);
    l1.push_back(1);
    l1.push_back(9);
    diaplay(l2);
    l2.sort();
    diaplay(l2);
    l1.merge(l2);
    l1.sort();
    diaplay(l1);
    l1.remove(1);
    diaplay(l1);
    l1.pop_front();
    diaplay(l1);
    return 0;
}