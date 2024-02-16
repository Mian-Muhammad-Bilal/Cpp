// #include <iostram>
// Using namespace std;

// Void towerOfHanoi(int n, char from_rod, char to_rod,Char aux_rod)
// {
//     If (n == 0)//base condition.
//     {
//         Return;
//     }
//     towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);//work OR body.
//     cout << "Move disk " << n <<" from rod" << from_rod << “ to rod “ << to_rod << endl;
//     towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
// }
//------------------------------------------------------
// Int main()
// {
//     int N = 3;

//     towerOfHanoi(N, 'A', 'C', 'B');
//     return 0;
// }

#include <iostream>
using namespace std;

void towerOfHanoi(int limit, int n, char from_rod, char to_rod, char aux_rod)
{

    int m = 0; // start from 0
    if (n >= limit)
    {
        return;
    }
    towerOfHanoi(limit, n + 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod" << from_rod << " to rod" << to_rod << endl;
    towerOfHanoi(limit, n + 1, aux_rod, to_rod, from_rod);
}
//------------------------------------------------------
int main()
{
    int limit = 3; // run until this limit
    int n;
    towerOfHanoi(limit, n, 'A', 'C', 'B');
    return 0;
}
