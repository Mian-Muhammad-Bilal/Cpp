#include <iostream>
#include <string.h>
#include <fstream>
#include <stdio.h>
// #include <conio.h>
#include <stdlib.h>

using namespace std;

class Book
{
	// string book_name;
	char book_name[25];
	float book_price;
	int book_id;

public:
	Book()
	{
		strcpy_s(book_name, "blank");
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
		// int b_id; string b_name; float b_price;
		cout << "Enter Book ID: " << endl;
		cin >> book_id;

		cout << "Enter Book Name: " << endl;
		cin.ignore();
		cin.getline(book_name, 24);

		cout << "Enter Book Price: " << endl;
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
			cout << "File does not exists!!" << endl;
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
			cout << "File does not exists!!" << endl;
		}
		else
		{
			file2.read((char *)this, sizeof(*this));
			while (!file2.eof())
			{
				if (!strcmp(s, (char *)this->book_name)) // returns 0
				{
					printDetails();
					flag = true;
				}
				file2.read((char *)this, sizeof(*this));
			}
			if (flag == false)
			{
				cout << "Record does not exists!!" << endl;
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
			cout << "File does not exists!!" << endl;
		}
		else
		{
			//	_getch();
			o.open("tempfile.dat", ios::out | ios::binary);
			file2.read((char *)this, sizeof(*this));
			while (!file2.eof())
			{
				if ((strcmp(s, book_name) != 0)) // returns 0 if matches
				{
					o.write((char *)this, sizeof(*this)); // write in file
				}
				file2.read((char *)this, sizeof(*this)); // again read the record
			}

			file2.close();
			o.close();
			remove(ff.c_str());
			//_getch();
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
			cout << "File does not exists!!" << endl;
		}
		else
		{
			//	_getch();
			o.open("tempfile.dat", ios::out | ios::binary);
			file2.read((char *)this, sizeof(*this));
			while (!file2.eof())
			{
				if ((strcmp(s, book_name) != 0)) // returns 0 if matches
				{
					o.write((char *)this, sizeof(*this)); // write in file
				}
				else if (strcmp(s, book_name) == 0)
				{
					Book b;
					b.inputData();
					o.write((char *)&b, sizeof(b)); // write in file
				}

				file2.read((char *)this, sizeof(*this)); // again read the record
			}

			file2.close();
			o.close();
			remove(ff.c_str());
			//_getch();
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
	int b_id;
	string b_name;
	float b_price;
	char bname[25];

	Book b1;

	char bn[25];
	bool flag = true;
	while (flag)
	{
		//	system("cls");
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
