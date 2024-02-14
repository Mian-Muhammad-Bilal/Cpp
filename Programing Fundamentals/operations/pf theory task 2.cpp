#include<iostream>
using namespace std;
int main ()
{
float cel, fah ;

cout<<"Enter the value of temperature in Fahrenheit" ;
cin>>fah ;

cel=(fah-32)*5/9 ;

cout<<"The entered value of temperature is equal to"<<cel<<"°C"<<endl ;

cout<<"Enter the value of temperature in Celsius" ;
cin>>cel ;

fah=(cel*9/5)+32 ;

cout<<"The entered value of temperature in equal to"<<fah<<"°F"<<endl ;
 

return 0 ;


















}