#include <iostream>
using namespace std;

class Array
{
public:
	int Arr[100], no = 100, fil = -1;

	virtual void add(int num) = 0;
};

class Back : public Array
{
public:
	void add(int num)
	{
		if (fil >= no - 1)
			cout << "Array is Full!" << endl;
		else
		{
			fil++;
			Arr[fil] = num;
		}
	}

	void display()
	{
		if (fil <= 0)
		{
			cout << "Array elements are:";
			for (int i = fil; i >= 0; i--)
				cout << Arr[i] << " ";
			cout << endl;
		}
		else
			cout << "Array is empty";
	}
};

class First : public Array
{
public:
	First()
	{
		for (int i = 0; i < 100; i++)
		{
			Arr[i] = 0;
		}
	}

	void add(int num)
	{
		if (fil <= -1)
			cout << "Stored!" << endl;
		else
		{
			cout << "The popped element is " << Arr[fil] << endl;
			fil--;
		}
	}

	void display()
	{
		if (fil >= 0)
		{
			cout << "Array elements are:";
			for (int i = fil; i >= 0; i--)
				cout << Arr[i] << " ";
			cout << endl;
		}
		else
			cout << "Array is empty" << endl;
	}
};

int main()
{
	int check;

	First F;
	Back B;

	int number;

	// menu
	cout << "1) Fill the Array" << endl;
	cout << "2) Pop from Array" << endl;
	cout << "3) Display Array" << endl;
	cout << "4) Exit" << endl;
	do
	{
		cout << "Enter choice: " << endl;
		cin >> check;
		switch (check)
		{
		case 1:
		{
			cout << "Enter number to be added:" << endl;
			cin >> number;
			F.add(number);
			break;
		}
		case 2:
		{
			B.add(5);
			break;
		}
		case 3:
		{
			F.display();
			break;
		}
		case 4:
		{
			cout << "Exit" << endl;
			break;
		}
		default:
		{
			cout << "Invalid choice" << endl;
		}
		}
	} while (check != 4);

	return 0;
}