#include<iostream>
using namespace std ;

class Vehicl
{
	public:
		float	Price;
	protected:
		int	Mileage ; 
	public:
		int	Id ; 
		Vehicl()
			{
			Price = 10000;
			Mileage = 17;
			Id = 0;
			}
		Vehicl(int  p , int m , int id)
			{
			Price = p;
			Mileage = m;
			this->Id = id;
			}
	void	Set_Price(float p)
			{
			Price = p;
			}
	void	Get_Price()
			{
			cout<<Price;
			}
		virtual	void calculatePrice() = 0 ;
};
//1------------------------------------
class TwoWheeler : private Vehicl
{
	public :
		float Discount ;
		TwoWheeler(){
			Discount = 0.5;
		}
		TwoWheeler(float d){
			Discount = d;
		}
	void calculatePrice()
		{
				Set_Price(Price*0.5);
					cout<<"The Price is :";
			Get_Price();
				cout<<endl;
		}
};
//2--------------------------------------
class FourWheeler : protected Vehicl
{
	protected :
		int Capacity ;
	public :
			FourWheeler()
			{
				Capacity = 0 ;
			}
			FourWheeler(int kg)
			{
				Capacity = kg ;
			}
	void calculatePrice()
		{
			if(Mileage>15)
			{
				int add = Mileage - 15;
				add = add*20000 ;
				add = Price +add ;
				Set_Price(add);
				
			}
			cout<<"The Price is :";
			Get_Price();
				cout<<endl;
		}
		
};
//3--------------------------------
class Car : protected FourWheeler
{
	public : 
		void calculatePrice();
		string name ;
	Car()
		{
			name = " ";
		}
	Car(string na)
		{
			name = na;
		}
};
//4----------------------------------
class Loader : private FourWheeler
{
	public:
	void calculatePrice()
		{
			if(Capacity>1300)
			{
				int add = Capacity - 1300 ;
				add = add*10000 ;
				add = Price +add ;
				Set_Price(add);
				
			}
				cout<<"The Price is :";
			Get_Price();
			cout<<endl;
		}
};

//===================================
int main()
{
	TwoWheeler a ;
	a.calculatePrice();
	FourWheeler a1(66) ;
	a1.calculatePrice();
	Loader a3 ;
	a3.calculatePrice();
	
	
	return 0 ;
}
