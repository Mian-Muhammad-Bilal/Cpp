#include<iostream>
using namespace std;
int main ()

{
int inch,feet,inch2 ;

cout<<"Enter the distance in inches:" ;
cin>>inch ;

feet=inch/12;
inch2=inch%12;

cout<<"The entered distance is equal to "<<feet<<"feet and "<<inch2<<"inches"<<endl ;


return 0 ;

}