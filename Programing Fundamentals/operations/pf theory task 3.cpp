#include<iostream>
using namespace std;

int main()
{
int days,years,months,weeks, minutes, seconds ;
cout<<"Enter the number of days" ;
cin>>days ;

years=days/365 ;
months=days%365 ;
months=months/30 ;
weeks=((days%365)%30)/7 ;
minutes=days*24*60 ;
seconds=days*24*60*60 ;

cout<<"Years="<<years<<endl ;
cout<<"Months="<<months<<endl ;
cout<<"Weeks="<<weeks<<endl ;
cout<<"Minutes="<<minutes<<endl ;
cout<<"Seconds="<<seconds<<endl ;


return 0 ;
}