#include <iostream>
using namespace std;
class LinkedList
{
private:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            // Initialize here
        }
    };
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }
    // Write a copy constructor. Also copy must be deep.
    // Overload [] operator. Use for loop in main to display it.
    void Insert(int d1, int d2);           // Add the node of data d2 after the node with data d1. If d2 is not available add it to the end.
    void Delete(int data);                 // Deletes a node with data.
    int getSize();                         // returns the count of elements in the list
    bool IsEmpty();                        // Returns true if empty.
    void Merge(Node *list);                // Merges the to the calling class.
    void Erase();                          // Deletes every node in an array.
    void SelectiveErase(int num);          // Find num and delete everything after num.
    int FindNCount(int find);              // Find and return count of all occurrence.
    int RemoveDuplicate(int find);         // Find and remove every duplicate element in the list. Make elements unique.
    void FindNReplace(int find, int data); // Find and replace all occurrence recursively.
    void Display();                        // Displays all the elements in list recursively.
};
void Swap()
{
}
int main()
{
    return 0;
}