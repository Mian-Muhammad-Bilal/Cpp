#include <iostream>
using namespace std;

class Array
{
public:
    Array();
    Array(int size);
    Array(int size, int current);
    Array(const Array &obj);
    ~Array();

    void setCurrent();
    void setSize();
    int getCurrent();
    int getSize();
    void insert(int element);
    void insert(int element, int index);
    bool remove(int element);
    bool remove();
    void search(int index);
    bool update(int element, int index);
    bool update(int element);
    void display();
    void display(int index);
    Array merge(const Array &obj);
    void copyArray(const Array &obj);
    void clear();
    void start();
    void tail();
    void next();
    void back();

private:
    int size;
    int current;
    static int count;
    int *arr;
};

int Array::count = 0;

Array::Array()
{
    size = 20; // Default size is 20
    current = 0;
    arr = new int[size](); // Initialize with zeros
    count++;
}

Array::Array(int size)
{
    this->size = size > 20 ? size : 20; // Minimum size is 20
    current = 0;
    arr = new int[this->size](); // Initialize with zeros
    count++;
}

Array::Array(int size, int current)
{
    this->size = size > 20 ? size : 20; // Minimum size is 20
    this->current = (current >= 0 && current < this->size) ? current : 0;
    arr = new int[this->size](); // Initialize with zeros
    count++;
}

Array::Array(const Array &obj)
{
    size = obj.size;
    current = obj.current;
    arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = obj.arr[i];
    }
    count++;
}

Array::~Array()
{
    delete[] arr;
    count--;
}

void Array::setCurrent()
{
    cout << "Enter the current position: ";
    cin >> current;
    if (current < 0 || current >= size)
    {
        cout << "Invalid current position. Resetting to 0." << endl;
        current = 0;
    }
}

void Array::setSize()
{
    cout << "Enter the new size: ";
    int newSize;
    cin >> newSize;
    if (newSize > 0)
    {
        int *newArr = new int[newSize]();
        for (int i = 0; i < min(size, newSize); i++)
        {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
        size = newSize;
        current = min(current, size - 1);
        cout << "Array resized successfully." << endl;
    }
    else
    {
        cout << "Invalid size. Size should be greater than 0." << endl;
    }
}

int Array::getCurrent()
{
    return current;
}

int Array::getSize()
{
    return size;
}

void Array::insert(int element)
{
    if (current < size)
    {
        arr[current++] = element;
        cout << "Element inserted successfully at current position." << endl;
    }
    else
    {
        cout << "Array is full. Cannot insert more elements." << endl;
    }
}

void Array::insert(int element, int index)
{
    if (index >= 0 && index < size)
    {
        arr[index] = element;
        cout << "Element inserted successfully at index " << index << "." << endl;
    }
    else
    {
        cout << "Invalid index. Cannot insert element." << endl;
    }
}

bool Array::remove(int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            for (int j = i; j < size - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            arr[size - 1] = 0; // Set the last element to 0
            current = max(0, current - 1);
            cout << "Element " << element << " removed successfully." << endl;
            return true;
        }
    }
    cout << "Element " << element << " not found." << endl;
    return false;
}

bool Array::remove()
{
    if (current >= 0 && current < size)
    {
        for (int i = current; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[size - 1] = 0; // Set the last element to 0
        cout << "Element at current position removed successfully." << endl;
        return true;
    }
    else
    {
        cout << "Invalid current position. Cannot remove element." << endl;
        return false;
    }
}

void Array::search(int index)
{
    if (index >= 0 && index < size)
    {
        cout << "Element at index " << index << ": " << arr[index] << endl;
    }
    else
    {
        cout << "Invalid index. Cannot search element." << endl;
    }
}

bool Array::update(int element, int index)
{
    if (index >= 0 && index < size)
    {
        arr[index] = element;
        cout << "Element at index " << index << " updated successfully." << endl;
        return true;
    }
    else
    {
        cout << "Invalid index. Cannot update element." << endl;
        return false;
    }
}

bool Array::update(int element)
{
    if (current >= 0 && current < size)
    {
        arr[current] = element;
        cout << "Element at current position updated successfully." << endl;
        return true;
    }
    else
    {
        cout << "Invalid current position. Cannot update element." << endl;
        return false;
    }
}

void Array::display()
{
    cout << "Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Array::display(int index)
{
    if (index >= 0 && index < size)
    {
        cout << "Element at index " << index << ": " << arr[index] << endl;
    }
    else
    {
        cout << "Invalid index. Cannot display element." << endl;
    }
}

Array Array::merge(const Array &obj)
{
    int newSize = size + obj.size;
    Array mergedArray(newSize);

    for (int i = 0; i < size; i++)
    {
        mergedArray.arr[i] = arr[i];
    }

    for (int i = 0; i < obj.size; i++)
    {
        mergedArray.arr[size + i] = obj.arr[i];
    }

    return mergedArray;
}

// Array::Array(const Array &obj)
// {
//     size = obj.size;
//     current = obj.current;
//     arr = new int[size];
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] = obj.arr[i];
//     }
//     count++;
// }

void Array::copyArray(const Array &obj)
{
    if (this != &obj)
    {
        delete[] arr;
        size = obj.size;
        current = obj.current;
        arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            arr[i] = obj.arr[i];
        }
        cout << "Array copied successfully." << endl;
    }
    else
    {
        cout << "Cannot copy the same array to itself." << endl;
    }
}

void Array::clear()
{
    delete[] arr;
    arr = new int[size]();
    current = 0;
    cout << "Array cleared successfully." << endl;
}

void Array::start()
{
    current = 0;
    cout << "Current position moved to the start." << endl;
}

void Array::tail()
{
    current = size - 1;
    cout << "Current position moved to the end." << endl;
}

void Array::next()
{
    current = min(current + 1, size - 1);
    cout << "Moved to the next position." << endl;
}

void Array::back()
{
    current = max(current - 1, 0);
    cout << "Moved back to the previous position." << endl;
}

void menu()
{
    cout << "User-define Array" << endl;
    cout << "1. Insert number in current position" << endl;
    cout << "2. Insert number in given index" << endl;
    cout << "3. Remove number in current position" << endl;
    cout << "4. Remove number in given position" << endl;
    cout << "5. Find number" << endl;
    cout << "6. Update number in given position" << endl;
    cout << "7. Update number in current position" << endl;
    cout << "8. Current move in start" << endl;
    cout << "9. Current move in end" << endl;
    cout << "10. Current move next" << endl;
    cout << "11. Current move back" << endl;
    cout << "12. Display" << endl;
    cout << "13. Copy Array" << endl;
    cout << "14. Merge Arrays" << endl;
    cout << "15. Clear Array" << endl;
    cout << "16. Exit" << endl;
}

int main()
{
    Array arr1;
    Array arr2;

    while (true)
    {
        menu();
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int element;
            cout << "Enter the element to insert: ";
            cin >> element;
            arr1.insert(element);
            break;

        case 2:
            int index, elementAtIndex;
            cout << "Enter the index to insert at: ";
            cin >> index;
            cout << "Enter the element to insert: ";
            cin >> elementAtIndex;
            arr1.insert(elementAtIndex, index);
            break;

        case 3:
            arr1.remove();
            break;

        case 4:
            int elementToRemove;
            cout << "Enter the element to remove: ";
            cin >> elementToRemove;
            arr1.remove(elementToRemove);
            break;

        case 5:
            int searchIndex;
            cout << "Enter the index to search: ";
            cin >> searchIndex;
            arr1.search(searchIndex);
            break;

        case 6:
            int updateIndex, updatedElement;
            cout << "Enter the index to update: ";
            cin >> updateIndex;
            cout << "Enter the updated element: ";
            cin >> updatedElement;
            arr1.update(updatedElement, updateIndex);
            break;

        case 7:
            int updatedElementAtCurrent;
            cout << "Enter the updated element: ";
            cin >> updatedElementAtCurrent;
            arr1.update(updatedElementAtCurrent);
            break;

        case 8:
            arr1.start();
            break;

        case 9:
            arr1.tail();
            break;

        case 10:
            arr1.next();
            break;

        case 11:
            arr1.back();
            break;

        case 12:
            arr1.display();
            break;

        case 13:
        {
            Array copyArray;
            copyArray.copyArray(arr1);
            cout << "Array copied successfully." << endl;
            copyArray.display();
            break;
        }

        break;

        case 14:
        {
            Array mergedArray = arr1.merge(arr2);
            cout << "Arrays merged successfully." << endl;
            mergedArray.display();
            break;
        }

        case 15:
            arr1.clear();
            cout << "Array cleared successfully." << endl;
            break;

        case 16:
            cout << "Exiting the program." << endl;
            return 0;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}
