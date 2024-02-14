#include <iostream>
using namespace std;

int main ()
{
	char ch;

	cout<<"Enter any character:";
	cin>>ch;


	if (ch>=65 && ch<=90)
{
		cout<<"The character is a capital letter";
}
	else if (ch>=97 && ch<=122)
		cout<<"The character is a small letter";

	else if (ch>=48 && ch<=57)
		cout<<"The character is a digit";

	else
		cout<<"The character is a special symbol";
	

	return 0;
}