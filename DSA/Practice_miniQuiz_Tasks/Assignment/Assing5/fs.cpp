#include <iostream>
using namespace std;
class BST
{
private:
    int *arr;
    int size = 0;
    int r;

public:
    BST(int size)
    {
        if (size == 0)
        {
            this->size = size;
        }
        this->size = size;
        arr = new int[size];
        r = -1;
    }
    bool IsEmpty()
    {
        if (r == -1)
        {
            return true;
        }
        return false;
    }

    void insert(int data)
    {
        int i = r;
        int csize = -1;

        for (int i = 0; i < size; i++)
        {
            if (IsEmpty() == true)
            {
                arr[i] = data;
            }

            else if (data > arr[csize])
            {
                arr[(2 * csize) + 1] = data;
                arr[csize] = data;
            }

            else if (data < arr[csize])
            {
                arr[(2 * csize) + 2] = data;
                arr[csize] = data;
            }
            else
            {
            }
        }
    }

    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    BST b(2);
    b.insert(50);
    b.insert(40);
    b.insert(30);
    // b.insert(20);
    // b.insert(10);
    b.display();
    return 0;
}
