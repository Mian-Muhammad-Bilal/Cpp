#include <iostream>
using namespace std;

int main()
{
    int capacity, no_of_people, more, over;
    cout << "Enter the number of people: " << endl;
    cin >> no_of_people;
    cout << "Enter the capacity of room: " << endl;
    cin >> capacity;
    more = capacity - no_of_people;
    if (capacity == no_of_people || capacity < no_of_people)
    {
        cout << "It is legal to hold the meeting and " << more << " more people is also legal to join the meeting " << endl;
    }
    else if (capacity > no_of_people)
    {
        over = no_of_people - capacity;
        cout << "No it is not legal to hold the meeting because the no of people is more than the total capacity exclude" << over << "people to hold th emetting legal" << endl;
    }
    return 0;
}