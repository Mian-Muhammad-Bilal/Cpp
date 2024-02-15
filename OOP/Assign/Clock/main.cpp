#include <iostream>
#include "clockType.h"

using namespace std;

int main()
{
    clockType clock1;
    clock1.setClock();
    clock1.display();

    clockType clock2(3, 45, 30);
    clock2.display();

    if (clock1.isEqual(clock2))
    {
        cout << "Both clocks are the same.\n";
    }
    else
    {
        cout << "Clocks are different.\n";
        cout << "Time difference: " << clock1.difference(clock2) << " seconds.\n";
    }

    return 0;
}
