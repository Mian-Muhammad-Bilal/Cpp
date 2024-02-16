#include <iostream>
#include <cstring>
#include <fstream>
#include <string>

using namespace std;

class Book
{
	char book_name[25];
	float book_price;
	int book_id;

public:
	Book()
	{
		strcpy(book_name, "blank");
		book_price = 0;
		book_id = 0;
	}

	Book(char book_name[24], float book_price, int book_id)
	{
		strcpy(this->book_name, book_name);
		this->book_price = book_price;
		this->book_id = book_id;
	}

	void inputData()
	{
		cout << "Enter Book ID: ";
		cin >> book_id;

		cout << "Enter Book Name: ";
		cin.ignore();
		cin.getline(book_name, 24);

		cout << "Enter Book Price: ";
		cin >> book_price;
	}

	void printDetails()
	{
		cout << "\n"
			 << book_id << " " << book_name << " " << book_price << endl;
	}

	void writeData()
	{
		ofstream os;
		os.open("test1.dat", ios_base::app | ios_base::binary);
		os.write((char *)this, sizeof(*this));
		os.close();
	}

	void readAllData()
	{
		ifstream file2;
		file2.open("test1.dat", ios::in | ios::binary);
		if (!file2)
		{
			cout << "File does not exist!!" << endl;
		}
		else
		{
			file2.read((char *)this, sizeof(*this));
			while (!file2.eof())
			{
				printDetails();
				file2.read((char *)this, sizeof(*this));
			}
			file2.close();
		}
	}

	void searchData(char *s)
	{
		ifstream file2;
		bool flag = false;
		file2.open("test1.dat", ios::in | ios::binary);
		if (!file2)
		{
			cout << "File does not exist!!" << endl;
		}
		else
		{
			file2.read((char *)this, sizeof(*this));
			while (!file2.eof())
			{
				if (!strcmp(s, (char *)this->book_name))
				{
					printDetails();
					flag = true;
				}
				file2.read((char *)this, sizeof(*this));
			}
			if (flag == false)
			{
				cout << "Record does not exist!!" << endl;
			}
			file2.close();
		}
	}

	void deleteData(char *s)
	{
		string ff = "test1.dat";
		string tmp = "tempfile.dat";
		ifstream file2;
		ofstream o;

		file2.open("test1.dat", ios::in | ios::binary);
		if (!file2)
		{
			cout << "File does not exist!!" << endl;
		}
		else
		{
			o.open("tempfile.dat", ios::out | ios::binary);
			file2.read((char *)this, sizeof(*this));
			while (!file2.eof())
			{
				if ((strcmp(s, book_name) != 0))
				{
					o.write((char *)this, sizeof(*this));
				}
				file2.read((char *)this, sizeof(*this));
			}
			file2.close();
			o.close();
			remove(ff.c_str());
			rename(tmp.c_str(), ff.c_str());
		}
	}

	void updateData(char *s)
	{
		string ff = "test1.dat";
		string tmp = "tempfile.dat";
		ifstream file2;
		ofstream o;

		file2.open("test1.dat", ios::in | ios::binary);
		if (!file2)
		{
			cout << "File does not exist!!" << endl;
		}
		else
		{
			o.open("tempfile.dat", ios::out | ios::binary);
			file2.read((char *)this, sizeof(*this));
			while (!file2.eof())
			{
				if ((strcmp(s, book_name) != 0))
				{
					o.write((char *)this, sizeof(*this));
				}
				else if (strcmp(s, book_name) == 0)
				{
					Book b;
					b.inputData();
					o.write((char *)&b, sizeof(b));
				}
				file2.read((char *)this, sizeof(*this));
			}

			file2.close();
			o.close();
			remove(ff.c_str());
			rename(tmp.c_str(), ff.c_str());
		}
	}

	void openFile()
	{
		system("test1.dat");
	}

	int menu()
	{
		int choice;
		cout << "\nBOOK MANAGEMENT SYSTEM!";
		cout << "\n1. Insert Book Record";
		cout << "\n2. View Book Record";
		cout << "\n3. Search Book Record";
		cout << "\n4. Delete Book Record";
		cout << "\n5. Update Book Record";
		cout << "\n6. Exit";
		cout << "\n\nEnter your choice:";
		cin >> choice;
		return choice;
	}
};

int main()
{
	Book b1;
	char bn[25];
	bool flag = true;

	while (flag)
	{
		switch (b1.menu())
		{
		case 1:
			b1.inputData();
			b1.writeData();
			cout << "\n\nRecord Inserted";
			break;
		case 2:
			b1.readAllData();
			break;
		case 3:
			cout << "\n\nEnter the book title to search:";
			cin.ignore();
			cin.getline(bn, 24);
			b1.searchData(bn);
			break;
		case 4:
			cout << "\n\nEnter the book title to delete:";
			cin.ignore();
			cin.getline(bn, 24);
			b1.readAllData();
			b1.deleteData(bn);
			cout << "\n\nRecord Deleted!";
			b1.readAllData();
			break;
		case 5:
			cout << "\n\nEnter the book title to update:";
			cin.ignore();
			cin.getline(bn, 24);
			b1.updateData(bn);
			cout << "\n\nRecord Updated!";
			break;
		case 6:
			cout << "\n\nTHANK YOU!!";
			flag = false;
			break;
		default:
			cout << "\n\nInvalid choice!!!!";
			break;
		}
	}

	return 0;
}