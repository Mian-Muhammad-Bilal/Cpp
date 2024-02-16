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

	void insertLeft(int data)
	{
		for (int i = 0; i < size; i++)
		{
			if (IsEmpty() == false && arr[r] < data)
			{
				arr[(2 * r) + 1] = data;
			}

			else
			{
			}
		}
	}

	void insertRight(int data)
	{
		for (int i = 0; i < size; i++)
		{
			if (IsEmpty() == false && arr[r] > data)
			{
				arr[(2 * r) + 2] = data;
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
	BST b(15);

	b.insert(50);
	b.insertLeft(17);
	b.insertRight(72);
	b.insertLeft(12);
	b.insertRight(23);
	b.insertLeft(54);
	b.insertRight(76);
	b.insertLeft(9);
	b.insertRight(14);
	b.insertLeft(19);
	b.insertRight(67);

	b.display();

	system("pause");
	return 0;
}
