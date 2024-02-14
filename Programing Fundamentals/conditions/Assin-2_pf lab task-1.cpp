#include<iostream>

using namespace std;
int main ()
{
 
float marks , perg ;

cout<<"Enter the marks: ";
cin>>marks;

perg= (marks/1100)*100 ;
   
      
if(perg>=80)
cout<<"Your Grade is A+.";

else if(perg>=70)
cout<<"Your Grade is A.";

else if(perg>=60)
cout<<"Your Grade is B.";

else if(perg>=50)
cout<<"Your Grade is C.";

else if(perg>=40)
cout<<"Your Grade is D.";

else if(perg>=30)
cout<<"Your grade is E.";

else
cout<<"Your Grade is F.";
            
            
            
    return 0;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}