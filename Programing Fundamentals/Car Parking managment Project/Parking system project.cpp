#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdio.h>
#include<fstream>
#include<iostream>
using namespace std;

// FUNCTION
void manu()
{
	cout << endl;
	cout << "                                        ";
	cout << endl;
	cout << "\t\t\t====================================================================";
	cout << endl;
	cout << "\t\t\t====================================================================";
	cout << endl;
	cout << "\n\t\t\t  1. Arrival of a Bike\t\t\t  6. Departure of Bike";
	cout << endl;
	cout << "\n\t\t\t  2. Arrival of a Car\t\t\t  7. Departure of Car";
	cout << endl;
	cout << "\n\t\t\t  3. Arrival of a Bus\t\t\t  8. Departure of Bus";
	cout << endl;
	cout << endl;
	cout << "\t\t\t  4. Arrival of a Rishkaw\t\t  9. Departure of Rishkaw";
	cout << endl;
	cout << endl;
	cout << "\t\t\t  5. Arrival of a Bicycle\t\t  1o. Departure of Bicycle";
	cout << endl;
	cout << endl;
	cout << "\t\t\t\t\t      ========================\n";
	cout << "\t\t\t\t\t      ========================";
	cout << endl;
	cout << "\n\t\t\t\t\t\t11. Show the record";
	cout << endl;
	cout << "\n\t\t\t\t\t\t12. Edit the record";
	cout << endl;
	cout << "\n\t\t\t\t\t\t13. Delete the record";
	cout << endl;
	cout << "\n\t\t\t\t\t\t14. Exit Program";
	cout << endl;
	cout << "\t\t\t====================================================================";
	cout << endl;
	cout << "\t\t\t====================================================================";
	cout << endl;
	cout << "\n";
	cout << endl;
	cout << "\t\t\t Select Your Choice :";
}

// MAIN STARTS HERE
int main()
{
     //pasword and username
	string userName;
	string userPassword;

	int loginAttempt = 0;

	cout << "\n\t\t\t\t\t=========================";
	cout << "\n\t\t\t\t\t=========================";
	cout << "\n\t\t\t\t\tYOU HAVE ONLY 5 ATTEMPTS";

	cout << "\n\t\t\t\t\t=========================";
	cout << "\n\t\t\t\t\t=========================";
	cout << endl
		 << endl;
	while (loginAttempt < 5)
	{

		cout << "\n\t\t\t\t\t==================================";
		cout << "\n\t\t\t\t\t==================================";
		cout << "\n\t\t\t\t\t  Please enter your Username: ";

		cin >> userName;

		

		if (userName == "Biologist0.5") //Biologist0.5 is username...
		{
			
	int ch ;
			cout << "\n\t\t\t\t\t  Correct Username\n";
			cout << "\n\t\t\t\t\t  Now enter *4 digit* password\n";
		cout << "\n\t\t\t\t\t==================================";
		cout << "\n\t\t\t\t\t==================================";
		cout << "\n\t\t\t\t\t  Please enter your user password: ";
		for(int i=0 ; i<4; i++ )
		{
		ch= getch() ;
		userPassword.push_back(ch) ;
	 	cout<<'X' ;
		}
//		cin >> userPassword;
		
		}
		else
		{

			cout << "\n\t\t\t\t\t  =======================================";
			cout << "\n\t\t\t\t\t  =======================================";
			cout << "\n\t\t\t\t\t  Invalid login attempt. Please try again." << endl;

			cout << "\t\t\t\t\t  =======================================";
			cout << "\n\t\t\t\t\t  =======================================";
			cout << "\n\t\t\t\t\t  please enter right"<<endl;
			cout<<"\n\t\t\t\t\t  USERNAME" << endl ;
			cout	 << endl;
		
		}
		
		
		 if (userPassword == "0055") //username...0055 is the password
		{
			cout << "\n\t\t\t\t\t  Welcome BIOLOGIST!\n";
			break;
		}
		
		else
		{

			cout << "\n\t\t\t\t\t  =======================================";
			cout << "\n\t\t\t\t\t  =======================================";
			cout << "\n\t\t\t\t\t  Invalid login attempt. Please try again." << endl;
			cout << "\t\t\t\t\t  =======================================";
			cout << "\n\t\t\t\t\t  =======================================";
			loginAttempt++;
			cout << "\n\t\t\t\t\t  ATTEMPT " << loginAttempt << " DONE! please enter right"<<endl;
			cout<<"\n\t\t\t\t\t  USERNAME AND PASSWORD" << endl ;
			cout	 << endl;
		}
	}
	if (loginAttempt == 5)
	{

		cout << "\n\t\t\t\t\t==================================================================";
		cout << "\n\t\t\t\t\t==================================================================";
		cout << "\n\t\t\t\t\t  Too many login attempts! The program will now terminate.";

		cout << "\n\t\t\t\t\t==================================================================";
		cout << "\n\t\t\t\t\t==================================================================";
		return 0;
	}
	cout << endl;
	cout << "===================================================Thank you for logging in================================================\n";
	cout << "\n\n\t\t\t\t    ====== CORRECT PASSCODE...CONGRAGULATIONS ======";
	int u_input ;  //user choice
	int amount = 0; //total money amount
	int count = 0; //total vahicle count
	int bi = 0; //bike
	int c = 0; //car
	int bu = 0; //bus
	int r = 0; //rishkaw
	int cy = 0; //bicycle
	int bycount = 0;  //bicycle count
	int bicount = 0; //bike count
	int ccount = 0; //car count
	int bucount = 0; //bus count
	int rcount = 0;  //rishkaw count
	cout << "\n\n\t\t\t\t       ====== WALCOME TO BIOLOGIST's PARKING SYSTEM ======";
	while (1) //Always true
	{

		manu(); // manu function call

		while (!(cin >> u_input)) //ristricting user to input only number
		{
			cout << "\n\t\t\tINVALID CHOICE...Please chose any above number : ";
			cin.clear();
			cin.ignore(123, '\n');
		}

		if (u_input == 1) // bike
		{
			int ch;
			cout << "\n\t\t\t============================================";
			cout << "\n\t\t\tAre you sure wanna allow this Bike to park?" << endl;
			cout << "\n\t\t\tPress 1 for YES" << endl;
			cout << "\n\t\t\tPress 0 for NO" << endl;
			cin >> ch;

			if (ch == 1)
			{

				if (bicount < 20)
				{
					bicount = bicount + 1;
					amount = amount + 100;
					count = count + 1;
					bi = bi + 1;
					cout << "\n\t\t\tOne Bike has parked.";
				}
				else
					cout << "\n\t\t\tNo more Bikes can park...Bike parking area is full !";
				cout << endl;
			}
			else if (ch == 0)
			{
				cout << "\n\t\t\tSorry your Bike can not park";
			}
			else
			{
				cout << "\n\t\t\tINVALID CHOICE...Bike can not park";
			}
		}

		else if (u_input == 2) // car
		{
			int ch;
			cout << "\n\t\t\t============================================";

			cout << "\n\t\t\tAre you sure wanna allow this Car to park?" << endl;
			cout << "\n\t\t\tPress 1 for YES" << endl;
			cout << "\n\t\t\tPress 0 for NO" << endl;
			cin >> ch;

			if (ch == 1)
			{
				if (ccount < 20)
				{
					ccount = ccount + 1;
					amount = amount + 200;
					count = count + 1;
					c = c + 1;
					cout << "\n\t\t\tOne Car has parked.";
				}
				else
					cout << "\n\t\t\tNo more Cars can park...Car parking area is full !";
				cout << endl;
			}

			else if (ch == 0)
			{
				cout << "\n\t\t\tSorry your Car can not park";
			}
			else
			{
				cout << "\n\t\t\tINVALID CHOICE...Car can not park";
			}
		}
		else if (u_input == 3) // bus
		{
			int ch;
			cout << "\n\t\t\t============================================";

			cout << "\n\t\t\tAre you sure wanna allow this Bus to park?" << endl;
			cout << "\n\t\t\tPress 1 for YES" << endl;
			cout << "\n\t\t\tPress 0 for NO" << endl;
			cin >> ch;

			if (ch == 1)
			{
				if (bucount < 10)
				{
					bucount = bucount + 1;
					amount = amount + 500;
					count = count + 1;
					bu = bu + 1;
					cout << "\n\t\t\tOne Bus has parked.";
				}
				else
					cout << "\n\t\t\tNo more Bus can park...Bus parking area is full !";
				cout << endl;
			}
			else if (ch == 0)
			{
				cout << "\n\t\t\tSorry your Bus can not park";
			}
			else
			{
				cout << "\n\t\t\tINVALID CHOICE...Bus can not park";
			}
		}

		else if (u_input == 4) // rishkaw
		{

			int ch;
			cout << "\n\t\t\t============================================";

			cout << "\n\t\t\tAre you sure wanna allow this Rishkaw to park?" << endl;
			cout << "\n\t\t\tPress 1 for YES" << endl;
			cout << "\n\t\t\tPress 0 for NO" << endl;
			cin >> ch;

			if (ch == 1)
			{
				if (rcount < 30)
				{
					rcount = rcount + 1;
					amount = amount + 300;
					count = count + 1;
					r = r + 1;
					cout << "\n\t\t\tOne Rishkaw has parked.";
				}
				else
					cout << "\n\t\t\tNo more Rishkaw can park...Rishkaw parking area is full !";
				cout << endl;
			}
			else if (ch == 0)
			{
				cout << "\n\t\t\tSorry your Rishkaw can not park";
			}
			else
			{
				cout << "\n\t\t\tINVALID CHOICE...Rishkaw can not park";
			}
		}
		else if (u_input == 5) // bibycle
		{

			int ch;
			cout << "\n\t\t\t============================================";

			cout << "\n\t\t\tAre you sure wanna allow this Bicycle to park?" << endl;
			cout << "\n\t\t\tPress 1 for YES" << endl;
			cout << "\n\t\t\tPress 0 for NO" << endl;
			cin >> ch;

			if (ch == 1)
			{
				if (bicount < 50)
				{
					bycount = bycount + 1;
					amount = amount + 50;
					count = count + 1;
					cy = cy + 1;
					cout << "\n\t\t\tOne Bicycle has parked.";
				}

				else
					cout << "\n\t\t\tNo more Bicycles can park...Bicycle parking area  is full";
				cout << endl;
			}

			else if (ch == 0)
			{
				cout << "\n\t\t\tSorry your Bicycle can not park";
			}
			else
			{
				cout << "\n\t\t\tINVALID CHOICE...Bicycle can not park";
			}
		}
		
		else if (u_input == 6) //departure bike
		{
			int ch;
			cout << "\n\t\t\t============================================";
			cout << "\n\t\t\tHave the driver payed the Parking fee ?" << endl;
			cout << "\n\t\t\tPress 1 for YES" << endl;
			cout << "\n\t\t\tPress 0 for NO" << endl;
			cin >> ch;

			if (ch == 1)
			{

				if (bicount >= 1)
				{
					bicount = bicount - 1;
					amount = amount - 100;
					count = count - 1;
					bi = bi - 1;
					cout << "\n\t\t\tOne Bike has Gone.";
				}
				else
					cout << "\n\t\t\tNo Bike was parked !";
				cout << endl;
			}
			else if (ch == 0)
			{
				cout << "\n\t\t\tPlease pay thr Parking fee fist";
			}
			else
			{
				cout << "\n\t\t\tINVALID CHOICE...Bike can not let to go";
			}
		}
		
		else if (u_input == 7) //departure Car
		{
			int ch;
			cout << "\n\t\t\t============================================";
			cout << "\n\t\t\tHave the driver payed the Parking fee ?" << endl;
			cout << "\n\t\t\tPress 1 for YES" << endl;
			cout << "\n\t\t\tPress 0 for NO" << endl;
			cin >> ch;

			if (ch == 1)
			{

				if (ccount >= 1)
				{
					ccount = ccount - 1;
					amount = amount - 200;
					count = count - 1;
					c = c - 1;
					cout << "\n\t\t\tOne Car has Gone.";
				}
				else
					cout << "\n\t\t\tNo Car was parked !";
				cout << endl;
			}
			else if (ch == 0)
			{
				cout << "\n\t\t\tPlease pay thr Parking fee fist";
			}
			else
			{
				cout << "\n\t\t\tINVALID CHOICE...Car can not let to go";
			}
		}
		
		else if (u_input == 8) //departure Bus
		{
			int ch;
			cout << "\n\t\t\t============================================";
			cout << "\n\t\t\tHave the driver payed the Parking fee ?" << endl;
			cout << "\n\t\t\tPress 1 for YES" << endl;
			cout << "\n\t\t\tPress 0 for NO" << endl;
			cin >> ch;

			if (ch == 1)
			{

				if (bucount >= 1)
				{
					bucount = bucount - 1;
					amount = amount - 500;
					count = count - 1;
					bu = bu - 1;
					cout << "\n\t\t\tOne Bus has Gone.";
				}
				else
					cout << "\n\t\t\tNo Bus was parked !";
				cout << endl;
			}
			else if (ch == 0)
			{
				cout << "\n\t\t\tPlease pay thr Parking fee fist";
			}
			else
			{
				cout << "\n\t\t\tINVALID CHOICE...Bus can not let to go";
			}
		}
		
		else if (u_input == 9) //departure Rishkaw
		{
			int ch;
			cout << "\n\t\t\t============================================";
			cout << "\n\t\t\tHave the driver payed the Parking fee ?" << endl;
			cout << "\n\t\t\tPress 1 for YES" << endl;
			cout << "\n\t\t\tPress 0 for NO" << endl;
			cin >> ch;

			if (ch == 1)
			{

				if (rcount >= 1)
				{
					rcount = rcount - 1;
					amount = amount - 300;
					count = count - 1;
					r = r - 1;
					cout << "\n\t\t\tOne Rishkaw has Gone.";
				}
				else
					cout << "\n\t\t\tNo Rishkaw was parked !";
				cout << endl;
			}
			else if (ch == 0)
			{
				cout << "\n\t\t\tPlease pay thr Parking fee fist";
			}
			else
			{
				cout << "\n\t\t\tINVALID CHOICE...Rishkaw can not let to go";
			}
		}
		
		else if (u_input == 10) //departure Bicycle
		{
			int ch;
			cout << "\n\t\t\t============================================";
			cout << "\n\t\t\tHave the driver payed the Parking fee ?" << endl;
			cout << "\n\t\t\tPress 1 for YES" << endl;
			cout << "\n\t\t\tPress 0 for NO" << endl;
			cin >> ch;

			if (ch == 1)
			{

				if (bycount >= 1)
				{
					bycount = bycount - 1;
					amount = amount - 50;
					count = count - 1;
					cy = cy - 1;
					cout << "\n\t\t\tOne Bicycle has Gone.";
				}
				else
					cout << "\n\t\t\tNo Bicycle was parked !";
				cout << endl;
			}
			else if (ch == 0)
			{
				cout << "\n\t\t\tPlease pay thr Parking fee fist";
			}
			else
			{
				cout << "\n\t\t\tINVALID CHOICE...Bicycle can not let to go";
			}
		}
		
		else if (u_input == 11) // record
		{
			cout << "\n\t\t\t========================================" << endl;
			cout << "\n\t\t\tThe total amount is equal to:";
			cout << amount;
			cout << endl;
			cout << "\n\t\t\tThe total number of Bikes is:";
			cout << bi;
			cout << endl;
			cout << "\n\t\t\tThe total number of Cars is:";
			cout << c;
			cout << endl;
			cout << "\n\t\t\tThe total number of Bus is:";
			cout << bu;
			cout << endl;
			cout << "\n\t\t\tThe total number of Rishkaw is:";
			cout << r;
			cout << endl;
			cout << "\n\t\t\tThe total number of Bicycle is:";
			cout << cy;
			cout << endl;
			cout << "\n\t\t\tThe total number of vahicles parked:";
			cout << count;
			cout << endl;
			cout << "\n\t\t\t=======================================" << endl;
		}

        else if (u_input == 12) //Edit the record
        { 
        int edit ;
        cout<<"\n\t\t\twhich amount do you wanna edit ? " ;
        cout<<"\n\t\t\t1.Total amount" ;
        cout<<"\n\t\t\t2.Bike" ;
        cout<<"\n\t\t\t3.Car" ;
        cout<<"\n\t\t\t4.Bus" ;
        cout<<"\n\t\t\t5.Rishkaw" ;
        cout<<"\n\t\t\t6.Bicycle" ;
        cout<<"\n\t\t\t7.Total number of vahicle" ;
        cout<<"\n\t\t\tChoose which you wanna edit" ;
        cin>>edit ;
         
          if (edit == 1)
          {
		  
            cout << "\n\t\t\t========================================" << endl;
			cout << "\n\t\t\tEditing The total amount ::";
			cout << "\n\t\t\tThe total amount is "<<amount<<" Now";
			cout << "\n\t\t\tEnter The total amount acording to your taste:";
			cin >>amount;
			cout << endl;
						cout << "\n\t\t\t=======================================" << endl;
		    cout << "\n\t\t\tYour entred value is added in record.";

		}
		
		else if (edit == 2)
		{
		
			cout << "\n\t\t\tEditing The number of Bikes ::";
			cout << "\n\t\t\tThe total number of bikes is "<<bi<<" Now";
			cout << "\n\t\t\tEnter The number of bikes acording to your taste:";
			cin >> bi;
			cout << endl;
					cout << "\n\t\t\t=======================================" << endl;
		    cout << "\n\t\t\tYour entred value is added in record.";

	}
		else if (edit == 3)
		{
	
			cout << "\n\t\t\tEditing The number of Cars ::";
			cout << "\n\t\t\tThe total number of Cars is "<<c<<" Now";
			cout << "\n\t\t\tEnter The number of cars acording to your taste:";
			cin >> c;
			cout << endl;
		cout << "\n\t\t\t=======================================" << endl;
		    cout << "\n\t\t\tYour entred value is added in record.";

}
	else if (edit == 4)
		{
	
			cout << "\n\t\t\tEditing The number of Bus ::";
			cout << "\n\t\t\tThe total number of bus is "<<bu<<" Now";
			cout << "\n\t\t\tEnter The number of bus acording to your taste:";
			cin>> bu;
			cout << endl;
		cout << "\n\t\t\t=======================================" << endl;
		    cout << "\n\t\t\tYour entred value is added in record.";

}
	else if (edit == 5)
		{
	
			cout << "\n\t\t\tEditing The number of Rishkaw ::";
			cout << "\n\t\t\tThe total number of Rishkaw is "<<r<<" Now";
			cout << "\n\t\t\tEnter The number of Rishkaw acording to your taste:";
			cin >> r;
			cout << endl;
		cout << "\n\t\t\t=======================================" << endl;
		    cout << "\n\t\t\tYour entred value is added in record.";

}
	else if (edit == 6)
		{
	
			cout << "\n\t\t\tEditing The number of Bicycle ::";
			cout << "\n\t\t\tThe total number of Bicycles is "<<cy<<" Now";
			cout << "\n\t\t\tEnter The number of bicycles acording to your taste:";
			cin >> cy;
			cout << endl;
		cout << "\n\t\t\t=======================================" << endl;
		    cout << "\n\t\t\tYour entred value is added in record.";

}
	else if (edit == 7)
		{
	
			cout << "\n\t\t\tEditing The number of parked vahicls::";
			cout << "\n\t\t\tThe total number of vahicles is "<<count<<" Now";
			cout << "\n\t\t\tEnter The total number of vahicles acording to your taste:";
			cin >> count;
			cout << endl;
		cout << "\n\t\t\t=======================================" << endl;
		    cout << "\n\t\t\tYour entred value is added in record.";

}

else 
{
	cout<<"Invalid choice...cannot edit" ;
	
}
        }

		else if (u_input == 13) // delete
		{

			int ch;
			cout << "\n\t\t\t============================================";

			cout << "\n\t\t\tAre you sure...wanna DELETE the Record?" << endl;
			cout << "\n\t\t\tPress 1 for YES" << endl;
			cout << "\n\t\t\tPress 0 for NO" << endl;
			cin >> ch;

			if (ch == 1)
			{
				if(count >= 1)
				{
				bi = 0;
				c = 0;
				bu = 0;
				r = 0;
				cy = 0;
				amount = 0;
				count = 0;
				cout << "\n\t\t\t==============";
				cout << "\n\t\t\t==============";
				cout << "\n\t\t\tRecord DELETED";
				cout << "\n\t\t\t==============";
				cout << "\n\t\t\t==============";
				cout << endl;
               }
               else
               {
               	cout<<"\n\t\t\tRecord is already EMPTY" ;
				cout << endl;
			   }
			}
			else if (ch == 0)
			{
				cout << "\n\t\t\tOke...record not gonna delete.";
			}
			else
			{
				cout << "\n\t\t\tINVALID CHOICE...Recoed not DELETED";
			}
		}

		else if (u_input == 14) // exit
		{

			int ch;
			cout << "\n\t\t\t============================================";

			cout << "\n\t\t\tAre you sure...wanna exit the Program?" << endl;
			cout << "\n\t\t\tPress 1 for YES" << endl;
			cout << "\n\t\t\tPress 0 for NO" << endl;
			cin >> ch;

			if (ch == 1)
			{
				cout << "\n\t\t\t=========================================";
				cout << "\n\t\t\t=========================================";
				cout << "\n\t\t\tGood Bye_have a Blessed day...see you next time.";
				cout << "\n\t\t\t=========================================";
				cout << "\n\t\t\t=========================================";
				cout << endl;

				return 0;
			}
			else if (ch == 0)
			{
				cout << "\n\t\t\tOke...program not gonna close" << endl;
				cout << "\n\t\t\tCountinue to Program";
			}
			else
			{
				cout << "\n\t\t\tINVALID CHOICE...Program can not close";
			}
		}

		else // random typo
		{

			cout << "\n\t\t\t==========================";
			cout << "\n\t\t\t==========================";
			cout << "\n\t\t\tInvalid choice...!";
			cout << "\n\t\t\t==========================";
			cout << "\n\t\t\t==========================";

			cout << endl;
		}
	}

	return 0;
}
