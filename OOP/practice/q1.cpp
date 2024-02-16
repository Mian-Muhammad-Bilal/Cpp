#include<iostream>
using namespace std ;

class Generic_Vehicle
{
	public:
		float Price ;
		int Production_year ;
		string Model ;
	    string vehicle_make ;
	public:
		Generic_Vehicle()
		{
		Price = 0;
		Production_year = 0000 ;
		Model = "";
	    vehicle_make ="";
		}
		Generic_Vehicle(float p , int py , string m , string vm)
		{
		Price = p;
		Production_year = py ;
		Model = m;
	    vehicle_make =vm;
		}
		
	    virtual void Start() =0;
		virtual void DisplayWindowSticker()=0;
		
	
};
class Car  : public Generic_Vehicle
{
	private:
	int noofdoors ;
	
	public:
		Car():Generic_Vehicle() 
		{
			noofdoors = 0;	
		}
Car(float p, int y, string m, string mk, int d):Generic_Vehicle(p, y, m, mk)
{

noofdoors = d;	
}
	
			
			void    DisplayWindowSticker()
	    {		cout << "\t\t\t\t-----------------------" <<endl <<endl;

	    cout <<"\t\t\t\tPrice of the car is : "<<Price<<endl;
	    cout <<"\t\t\t\tProduction_year of the car is : "<<Production_year<<endl;
	    cout <<"\t\t\t\tModel of the car is : "<<Model<<endl;
	    cout <<"\t\t\t\tVehicle_make of the car is : "<<vehicle_make<<endl<<endl;
	    		cout << "\t\t\t\t-----------------------" << endl<<endl;

		}
		 
	void    Start()
	    {
		int slt=0 ;
		while(true)
		{
	    	cout << "\t\t\t\t          Car          " << endl;
		cout << "\t\t\t\t -----------------------" << endl;
		cout << "\t\t\t\t 1. Start engine       " << endl;
		cout << "\t\t\t\t 2. Exit car " << endl;
		cout << "\t\t\t\t 3. Display Window Sticker again" << endl;
		cout << "\t\t\t\t 4. Quit menu selection \n\n" << endl;
		cout << "\t\t\t\tSelect your choice..." << " 1 through 4 " << endl;
			cin>>slt ;
		if (slt ==1)
		{
			cout<<"The engine has started."<<endl;
		}
		else if(slt==2)
		{
			cout<<"The car have exited."<<endl;
		}
			else if(slt==3)
		{
		 DisplayWindowSticker(); 
		}
			else if(slt==4)
		{
			break ;
		}
		else{
			cout<<" select between 1 and 4"<<endl;
		}

		}
		
		}
};


int main()
{
	Car  a(2,2002,"BMW 760","BMW", 4) ;
	
	a.Start();
	
	return 0 ;
}
