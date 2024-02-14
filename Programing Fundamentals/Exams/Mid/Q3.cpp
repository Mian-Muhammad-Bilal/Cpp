#include <iostream>
using namespace std;

int main()
{
	int number, option;
	char letter;
	cout<<"Convert ASCII value ot Character"<<endl;
	cout<<"Convert Character value ot ASCII value"<<endl;
	cout<<"Enter your choice:";
	cin>>option;
switch(option)
{
	case 1:
	cout<<"Enter a number";
	cin>>number;
	cout<<" The corresponding chracter is:"<<char(number)<<endl;
	break;
	case 2:
	cout<<"Enter a letter";
	cin>>letter;
	cout<<" ASCII value of the letter is:"<<int(letter)<<endl;
break;
default:
cout<<"Invalid Option";
break;
	}

}
