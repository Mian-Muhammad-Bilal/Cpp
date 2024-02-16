#include "iostream"
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
			this->data = data;
			next = NULL;
		}
	};
	Node *head;

public:
	LinkedList()
	{
		head = NULL;
	}
	void Insert(int data)
	{
		if (head == NULL)
		{
			head = new Node(data);
			return;
		}
		Node *temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new Node(data);
	}
	void SearchnInsert(int search, int data)
	{
		if (head == NULL)
		{
			Insert(data);
		}
		Node *temp = head;
		while (temp != NULL)
		{
			if (temp->data == search)
			{
				Node *temp1 = temp->next;
				temp->next = new Node(data);
				temp->next->next = temp1;
			}
			temp = temp->next;
		}
	}
	void Update(int find, int data)
	{
		Node *temp = head;
		while (temp != NULL)
		{
			if (temp->data == find)
			{
				temp->data = data;
				break;
			}
			temp = temp->next;
		}
	}
	void DeleteAtHead()
	{
		Node *temp = head;
		head = head->next;
		delete temp;
	}
	void DeleteAtTail()
	{
		if (head == NULL)
		{
			return;
		}
		Node *temp = head;
		Node *temp1 = NULL;
		while (temp->next != NULL)
		{
			temp1 = temp;
			temp = temp->next;
		}
		temp1->next = NULL;
		delete temp;
	}
	void Display()
	{
		Node *temp = head;
		while (temp != NULL)
		{
			cout << temp->data << endl;
			temp = temp->next;
		}
	}
};
int main()
{
	LinkedList ll;
	ll.Insert(1);
	ll.Insert(2);
	ll.Insert(3);
	ll.Insert(4);
	ll.Insert(5);
	ll.Insert(6);
	ll.Display();
	cout << "LL after search and display\n";
	ll.SearchnInsert(6, 7);
	ll.Display();

	cout << "LL after Update\n";
	ll.Update(7, 3);
	ll.Display();
	cout << "LL after delete at head\n";
	ll.DeleteAtHead();
	ll.Display();
	cout << "LL after delete at tail\n";
	ll.DeleteAtTail();
	ll.Display();
	system("pause");
}