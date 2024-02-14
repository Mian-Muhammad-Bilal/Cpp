#include <iostream>
using namespace std ; 
int main()
{
double slr, totl;
cout<<"Enter the amount of salary: ";
cin>>slr;
if(slr>=500000)
{
totl=slr-(15*slr)/100;

}
else if(slr>=200000)
{
totl=slr-2000;

}
else
totl=slr;

cout<<"The net salary is: "<<totl;










return 0;










} 