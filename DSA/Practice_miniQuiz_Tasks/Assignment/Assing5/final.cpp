#include <iostream>
using namespace std;
class BST
{
private:
    int *arr, limit_size, size;

public:
    BST(int l)
    {
        limit_size = l;
        size = 0;
        arr = new int[l];
    }
    int leftChild(int i)
    {
        return 2 * i + 1;
    }
    int rightChild(int i)
    {
        return 2 * i + 2;
    }
    int parent(int i)
    {
        return (i - 1) / 2;
    }
    int leftSibling(int i)
    {
        if (i % 2 == 0 && i != 0)
        {
            return i - 1;
        }
        return -1;
    }
    int rightSibling(int i)
    {
        if (i % 2 != 0 && i + 1 < size)
        {
            return i + 1;
        }
        return -1;
    }
    void insert(int data)
    {
        if (size == limit_size)
        {
            return;
        }
        arr[size] = data;
        size++;
    }
    void remove(int data)
    {
        int i;
        for (i = 0; i < size; i++)
        {
            if (arr[i] == data)
            {
                break;
            }
        }
        if (i == size)
        {
            return;
        }
        arr[i] = arr[size - 1];
        size--;
    }
    ~BST()
    {
        delete[] arr;
    }

    // function to search for a node in the BST
    bool search(int data)
    {
        // base case: if the tree is empty, return false
        if (size == 0)
        {
            return false;
        }

        // search the left and right subtrees
        if (arr[0] == data)
        {
            return true;
        }
        else if (data < arr[0])
        {
            return searchInSubtree(leftChild(0), data);
        }
        else
        {
            return searchInSubtree(rightChild(0), data);
        }
    }
    bool searchInSubtree(int i, int data)
    {
        if (i >= size)
        {
            return false;
        }
        if (arr[i] == data)
        {
            return true;
        }
        if (data < arr[i])
        {
            return searchInSubtree(leftChild(i), data);
        }
        else
        {
            return searchInSubtree(rightChild(i), data);
        }
    }
    int getHeight(int data)
    {
        if (size == 0)
        {
            return -1;
        }
        int i;
        for (i = 0; i < size; i++)
        {
            if (arr[i] == data)
            {
                break;
            }
        }
        if (i == size)
        {
            return -1;
        }
        int height = 0;
        while (i != 0)
        {
            i = parent(i);
            height++;
        }
        return height;
    }
    int min()
    {
        if (size == 0)
        {
            return -1;
        }
        int i = 0;
        while (leftChild(i) < size)
        {
            i = leftChild(i);
        }
        return arr[i];
    }
    int max()
    {
        if (size == 0)
        {
            return -1;
        }
        int i = 0;
        while (rightChild(i) < size)
        {
            i = rightChild(i);
        }
        return arr[i];
    }

    void inOrder()
    {
        if (size == 0)
        {
            return;
        }
        inOrder(leftChild(0));
        cout << arr[0] << " ";
        inOrder(rightChild(0));
    }
    void inOrder(int i)
    {
        if (i >= size)
        {
            return;
        }
        inOrder(leftChild(i));
        cout << arr[i] << " ";
        inOrder(rightChild(i));
    }
    void preOrder()
    {
        if (size == 0)
        {
            return;
        }
        cout << arr[0] << " ";
        preOrder(leftChild(0));
        preOrder(rightChild(0));
    }
    void preOrder(int i)
    {
        if (i >= size)
        {
            return;
        }
        cout << arr[i] << " ";
        preOrder(leftChild(i));
        preOrder(rightChild(i));
    }
    void postOrder()
    {
        if (size == 0)
        {
            return;
        }
        postOrder(leftChild(0));
        postOrder(rightChild(0));
        cout << arr[0] << " ";
    }
    void postOrder(int i)
    {
        if (i >= size)
        {
            return;
        }
        postOrder(leftChild(i));
        postOrder(rightChild(i));
        cout << arr[i] << " ";
    }
};
int main()
{
    BST b(8);
    b.insert(1);
    b.insert(2);
    b.insert(3);
    b.insert(4);
    b.insert(5);
    b.insert(6);
    b.insert(7);
    cout << "The max is: " << b.max() << endl;
    cout << "The min is: " << b.min() << endl;
    cout << "The height of 4 is: " << b.getHeight(4);
    cout << "\nInorder tiversal: ";
    b.inOrder();
    cout << "\nPostorder tiversal: ";
    b.postOrder();
    cout << "\nPreorder tiversal: ";
    b.preOrder();
    b.remove(7);
    cout << "\nPreorder tiversal after removing(7): ";
    b.preOrder();
    cout << "\nsearching 1 if present(1/0): " << b.search(1) << endl;
}