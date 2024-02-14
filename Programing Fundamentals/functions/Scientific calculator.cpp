//Abdullah Faisal
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
double RadDeg(){
	char opt;
	double val;
	cout<<"You want to enter value in?\n";
	cout<<"\ta. Radian\n";
	cout<<"\tb. Degree\n";
	cin>>opt;
	if(opt=='a'){
		cout<<"Enter value in radian: ";
		cin>>val;
	}
	else if(opt=='b'){
		cout<<"Enter value in degree: ";
		cin>>val;
		val*=3.14159265/180;
	}
	else{
		cout<<"Wrong input, run code again";
	}
	return val;
}
void add(){
	double a,b;
	cout<<"Enter first operand: "; cin>>a;
	cout<<"Enter second operand: "; cin>>b;
	cout<<"Sum is: "<<a+b;
}
void sub(){
	double a,b;
	cout<<"Enter first operand: "; cin>>a;
	cout<<"Enter second operand: "; cin>>b;
	cout<<"Differnce is: "<<a-b;
}
void pro(){
	double a,b;
	cout<<"Enter first operand: "; cin>>a;
	cout<<"Enter second operand: "; cin>>b;
	cout<<"Product is: "<<a*b;
}
void div(){
	double a,b;
	cout<<"Enter dividend: "; cin>>a;
	cout<<"Enter divisor: "; cin>>b;
	cout<<"Quotient is: "<<a/b;
	cout<<"\nRemainder is: "<<int(a)%int(b);
}
void sqr(){
	double a;
	cout<<"Enter number: "; cin>>a;
	cout<<"Square is: "<<a*a;
}
void exp(){
	double a,b;
	cout<<"Enter Number(base): "; cin>>a;
	cout<<"Enter Power(exponent): "; cin>>b;
	cout<<"Answer is: "<<pow(a,b);
}
void Sin(){
	double ang;
	ang=RadDeg();
	cout<<"SIN is: "<<sin(ang);
}
void aSin(){
	double ang;
	cout<<"Enter angle(-1to1): "; cin>>ang;
	cout<<"SIN(inv) in radian is: "<<asin(ang)<<endl;
	cout<<"SIN(inv) in degree is: "<<asin(ang)*180/3.14159265;
}
void Cos(){
	double ang;
	ang=RadDeg();
	cout<<"COS is: "<<cos(ang);
}
void aCos(){
	double ang;
	cout<<"Enter angle(-1to1): "; cin>>ang;
	cout<<"COS(inv) in radian is: "<<acos(ang)<<endl;
	cout<<"COS(inv) in degree is: "<<acos(ang)*180/3.14159265;
}
void Tan(){
	double ang;
	ang=RadDeg();
	cout<<"TAN is: "<<tan(ang);
}
void aTan(){
	double ang;
	cout<<"Enter angle: "; cin>>ang;
	cout<<"TAN(inv) in radian is: "<<atan(ang)<<endl;
	cout<<"TAN(inv) in degree is: "<<atan(ang)*180/3.14159265;
}
void Cot(){
	double ang=RadDeg();
	cout<<"Cot is: "<<(cos(ang)/sin(ang));
}
void Sec(){
	double ang=RadDeg();
	cout<<"SEC is: "<<(1/cos(ang));
}
void Csc(){
	double ang=RadDeg();
	cout<<"CSC is: "<<(1/sin(ang));
}
void Sinh(){
	double ang=RadDeg();
	cout<<"SINh is: "<<sinh(ang);
}
void Cosh(){
	double ang=RadDeg();
	cout<<"COSh is: "<<cosh(ang);
}
void Ln(){
	double val;
	cout<<"Enter value: "; cin>>val;
	cout<<"Natural Log(ln) is: "<<log(val);
}
void Sqrt(){
	double val;
	cout<<"Enter value: "; cin>>val;
	cout<<"Square root is: "<<sqrt(val);
}
void Cbrt(){
	double val;
	cout<<"Enter value: "; cin>>val;
	cout<<"Cube root is: "<<cbrt(val);
}
int main(){
	int func,i=1;
	do{
		system("cls");
	cout<<"\n\t01. Addition \t\t\t 02. Subtract";
	cout<<"\n\t03. Multiply \t\t\t 04. Divide";
	cout<<"\n\t05. Square \t\t\t 06. Power(exponent)";
	cout<<"\n\t07. Sine(sin) \t\t\t 08. Sin(inv)";
	cout<<"\n\t09. Cosine(cos) \t\t 10. Cos(inv)";
	cout<<"\n\t11. Tangent(tan) \t\t 12. Tan(inv)";
	cout<<"\n\t13. Cotagent(cot) \t\t 14. Secant(sec)";
	cout<<"\n\t15. Cosecant(cosc) \t\t 16. Natural log";
	cout<<"\n\t17. Cosine hyperbolic(cosh) \t 18. Sine hyperbolic(sinh)";
	cout<<"\n\t19. Square root \t\t 20. Cube root";
	
	cout<<"\n\t\t\t00. Exit";
	
	cout<<"\n\nSelect any operation from above: ";
	cin>>func;
	cout<<"\n--------------------------------\n";
	switch(func){
		case 0:
			i=0;
			cout<<"\t\tBye Bye!";
			break;
		case 1:
			add();
			getch();
			break;
		case 2:
			sub();
			getch();
			break;
		case 3:
			pro();
			getch();
			break;
		case 4:
			div();
			getch();
			break;
		case 5:
			sqr();
			getch();
			break;
		case 6:
			exp();
			getch();
			break;
		case 7:
			Sin();
			getch();
			break;
		case 8:
			aSin();
			getch();
			break;
		case 9:
			Cos();
			getch();
			break;
		case 10:
			aCos();
			getch();
			break;
		case 11:
			Tan();
			getch();
			break;
		case 12:
			aTan();
			getch();
			break;
		case 13:
			Cot();
			getch();
			break;
		case 14:
			Sec();
			getch();
			break;
		case 15:
			Csc();
			getch();
			break;
		case 16:
			Ln();
			getch();
			break;
		case 17:
			Cosh();
			getch();
			break;
		case 18:
			Sinh();
			getch();
			break;
		case 19:
			Sqrt();
			getch();
			break;
		case 20:
			Cbrt();
			getch();
			break;
		default:
			cout<<"Wrong input, run code again.";
			getch();
	}
	cout<<"\n--------------------------------\n";
	
	}while(i==1);
	return 0;
}