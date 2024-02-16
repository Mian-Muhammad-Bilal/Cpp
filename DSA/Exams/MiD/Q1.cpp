////**************/ Question Number 2 \*************
//
// #include <iostream>
// using namespace std;
//
// class Queue {
//
//    class Node {
//    public:
//        int id;
//        string name;
//        string city;
//        Node* next;
//
//        Node(int id, const string& name, const string& city) {
//            this->id = id;
//            this->name = name;
//            this->city = city;
//            this->next = next;
//        }
//    };
//
// public:
//    Node* front;
//    Node* rear;
//    int size;
//
//    Queue()
//    {
//        front = nullptr;
//        rear = nullptr;
//        size = 0;
//    }
//
//    bool isEmpty()
//    {
//        return size == 0;
//    }
//
//    void enqueue(int id, const string& name, const string& city) {
//        Node* newNode = new Node(id, name, city);
//        if (isEmpty()) {
//            front = newNode;
//        }
//        else {
//            rear->next = newNode;
//        }
//        rear = newNode;
//        size++;
//    }
//
//    void dequeue() {
//        if (isEmpty()) {
//            cout << "Error: Queue is empty" << endl;
//            return;
//        }
//        Node* temp = front;
//        front = front->next;
//        delete temp;
//        size--;
//        if (isEmpty()) {
//            rear = nullptr;
//        }
//    }
//
//    void print() {
//        if (isEmpty()) {
//            cout << "Queue is empty" << endl;
//            return;
//        }
//        cout << "Queue: ";
//        Node* temp = front;
//        while (temp != nullptr) {
//            cout << "(" << temp->id << ", " << temp->name << ", " << temp->city << ") ";
//            temp = temp->next;
//        }
//        cout << endl;
//    }
//};
//
// int main() {
//    Queue q;
//
//    q.enqueue(1, "Hamza", "New York");
//    q.enqueue(2, "Bilal", "Chicago");
//    q.enqueue(3, "John", "Los Angeles");
//
//    q.print(); // Queue: (1, Alice, New York) (2, Bob, Chicago) (3, Charlie, Los Angeles)
//
//    q.dequeue();
//    q.dequeue();
//
//    q.print(); // Queue: (3, Charlie, Los Angeles)
//
//    q.enqueue(4, "Kaleem", "Boston");
//    q.enqueue(5, "Ahmed", "Seattle");
//
//    q.print(); // Queue: (3, Charlie, Los Angeles) (4, Dave, Boston) (5, Eve, Seattle)
//
//    return 0;
//}

//**************/ Question Number 3 \*************

// #include <iostream>
// #include <stack>
// using namespace std;
//
// class Node {
// public:
//     int data;
//     Node* next;
//
//     Node(int data, Node* next = nullptr)
//     {
//         this->data = data;
//         this->next = next;
//     }
// };
//
// bool isPalindrome(Node* head) {
//     std::stack<int> s;
//
//     // Push the elements of the list onto the stack
//     Node* p = head;
//     while (p != nullptr) {
//         s.push(p->data);
//         p = p->next;
//     }
//
//     // Compare the elements of the list with the elements on the stack
//     p = head;
//     while (p != nullptr) {
//         if (p->data != s.top()) return false;
//         s.pop();
//         p = p->next;
//     }
//
//     return true;
// }
//
// int main() {
//     // Create a palindrome list
//     Node* head = new Node(1);
//     head = new Node(2, head);
//     head = new Node(3, head);
//     head = new Node(2, head);
//     head = new Node(1, head);
//
//     if (isPalindrome(head)) {
//         cout << "The list is a palindrome." << endl;
//     }
//     else {
//         cout << "The list is not a palindrome." << endl;
//     }
//
//     return 0;
// }

////**************/ Question Number 4 \*************
//
// #include <iostream>
// using namespace std;
// class Stack
//{
// private:
//
//    int* arr, size, top;
//
// public:
//
//    Stack(int size)
//    {
//        if (size < 1)
//            this->size = 5;
//        else
//            this->size = size;
//        top = -1;
//        arr = new int[size];
//    }
//    bool isEmpty()
//    {
//        if (top == -1)
//            return true;
//        return false;
//    }
//    bool isFull()
//    {
//        if (top == size - 1)
//            return true;
//        return false;
//    }
//    void push(int data)
//    {
//        if (isFull())
//        {
//            cout << "Can't push data, cz stack is full" << endl;
//            return;
//        }
//        else
//            arr[++top] = data;
//    }
//    int pop()
//    {
//        if (isEmpty())
//            cout << "Can't pop,cz stack is empty" << endl;
//        else
//        {
//            cout << arr[top] << " ";
//            return arr[top--];
//        }
//    }
//
//    void Display()
//    {
//        if (isEmpty())
//            cout << "Nothing to display, cz stack is empty" << endl;
//        else
//        {
//            for (int i = 0; i < size; i++)
//            {
//                cout << arr[i] << "->";
//            }
//            return;
//        }
//    }
//};
// int main()
//{
//    Stack ST(3);
//    cout << "We've recieved: " << endl;
//    ST.push(5);
//    ST.push(9);
//    ST.push(6);
//    ST.Display();
//    cout << "\nThe reversed number is " << endl;
//    ST.pop();
//    ST.pop();
//    ST.pop();
//    return 0;
//}

//**************/ Question Number 5 \*************

#include <iostream>
using namespace std;
class Stack
{
private:
    int *arr, size, top;

public:
    Stack(int size)
    {
        if (size < 1)
            this->size = 10;
        else
            this->size = size;
        top = -1;
        arr = new int[size];
    }

    // if stack is full
    bool isFull()
    {
        if (top == size - 1)
            return true;
        return false;
    }

    // if stack is empty
    bool isEmpty()
    {
        if (top == -1)
            return true;
        return false;
    }

    // push data in stack
    void Push(int data)
    {
        if (isFull())
        {
            cout << "Uh-oh! Can't push data because stack is Full!" << endl;
            return;
        }
        else
            arr[++top] = data;
    }
    int Pop()
    {
        if (isEmpty())
            cout << "Uh-oh! Can't pop data because stack is Empty!" << endl;
        else
            return arr[top--];
    }
    void Display()
    {
        if (isEmpty())
            cout << "Uh-oh! Can't Display the data because stack is empty!" << endl;
        else
        {
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << endl;
            }
            return;
        }
    }
};
int main()
{
    Stack s(5);
    cout << "Placing the data in thr given jar(acually stack): \n"
         << endl;
    s.Push(1);
    s.Push(2);
    s.Push(3);
    s.Push(4);
    s.Push(5);
    s.Display();
    cout << "\nAfter the deletion operatoin (actually popping from stack): \n"
         << endl;
    s.Pop();
    s.Pop();
    s.Pop();
    s.Display();
    return 0;
}