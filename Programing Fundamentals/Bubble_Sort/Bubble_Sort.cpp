#include <iostream>

using namespace std;

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    const int size = 5;
    int arr[size] = {4, 2, 7, 1, 5};

    cout << "Original Array: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }

    bubbleSort(arr, size);

    cout << "\nSorted Array: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
