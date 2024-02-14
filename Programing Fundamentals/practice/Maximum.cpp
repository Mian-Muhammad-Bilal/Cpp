#include <iostream>

using namespace std;

int findMax(int arr[], int size)
{
    int max = arr[0];

    for (int i = 1; i < size; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    const int size = 5;
    int arr[size] = {8, 3, 6, 2, 7};

    cout << "Maximum element: " << findMax(arr, size) << endl;

    return 0;
}
