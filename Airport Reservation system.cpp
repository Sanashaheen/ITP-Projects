#include<iostream>
#include<string>



//Prototypes
int type();
void Domairlines();
void Intairlines();
void domoperations(int air);
void intoperations(int air);
void dombooking();
void intbooking();
void allflights();
void timing();
void data();
void ticket();
bool runagain();

using namespace std;

//Global Declarations

string airline;
string depcity, arrcity;
string time;
string aircraft;
string firstname, lastname, address, passport;
int tDate = 8; int tMonth = 1; int tYear = 2018; //today's date
int bDate; int bMonth; int bYear;  //DEP DATE

								   //////////////////////////////////////////////////////////////////
int main()
{    //Type of Flight, Domestic or International.
	do
	{
		switch (type())
		{
		case '1':              //1st function called  
		{                               //domestic if true
			Domairlines();        //2nd function called
			break;
		}
		case '2':                             //International if false
		{
			Intairlines();     //3rd function called    //5th function called.
			break;
		}
		}
		timing();
		data();
		ticket();

	} while (runagain() == 1);

}
/////////////////////////////////////////////////////////////
//1st Function
int type()
{
	char typ;
	do {
		system("CLS");
		cout << "\n\n\n\n\n\n";
		cout << "\t\t" << "             */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl;
		cout << "\t\t" << "        */*/                                                             */*/" << endl;
		cout << "                                        ______________________________________         " << endl;
		cout << "\t\t" << "        */*/           |KHAN Travels and Tours Reservations   |          */*/" << endl;
		cout << "                                       |______________________________________|         " << endl;
		cout << "\t\t" << "     */*/                            MAIN MENU                              */*/" << endl << endl;
		cout << "\t\t" << "  */*/                            ENTER YOUR CHOICE                            */*/" << endl << endl;
		cout << "\t\t" << "  */*/                        PRESS 1 FOR LOCAL BOOKING                        */*/" << endl << endl;
		cout << "\t\t" << "     */*/                  PRESS 2 FOR INTERNATIONAL BOOKING                */*/" << endl << endl;
		cout << "\t\t" << "        */*/               PRESS 3 FOR Search of  All Flights          */*/" << endl << endl;
		cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
		cout << "\t\t\t" << "*         NOW ENTER YOUR CHOICE:      ";
		cin >> typ;
		system("CLS");
	} while (typ < '1' || typ>'3');
	if (typ == '3')
	{
		allflights();
	}

	return typ;
}
//*****************************************************//
//2nd Function
void Domairlines()
{
	int air;
	do
	{
		system("CLS");
		cout << "\t Airlines Operating Domestic Flights:" << endl << endl;


		cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
		cout << "\tPlease choose the Airline you want to travel in" << endl << endl;
		cout << "1)PIA" << endl << endl;
		cout << "2)Shaheen Air" << endl << endl;
		cout << "3)Air Blue" << endl << endl;
		cout << "4)Serene Air" << endl << endl;
		cin >> air;//Airline choose.
		cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
	} while (air < 1 || air > 4);

	domoperations(air);                         ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	dombooking();
}
//******************************************************************************
//3rd function
void Intairlines()
{

	int air;
	do
	{
		system("CLS");
		cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
		cout << "\t\t\t\t Airlines Operating International Flights:" << endl << endl;

		cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
		cout << "\tPlease choose the Airline you want to travel in" << endl << endl;
		cout << "1)PIA" << endl << endl;
		cout << "2)Emirates" << endl << endl;
		cout << "3)Qatar Airways" << endl << endl;
		cout << "4)Turkish Airlines" << endl << endl;
		cout << "5)American Airlines" << endl << endl;
		cin >> air;//Airline choose.
		cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
	} while (air < 0 || air > 5);
	intoperations(air);
	intbooking();                                   ////////////////////////////////////////////////////////////////////////////////////////////////////////


}
//*********************************************************************************
//4th Function
void domoperations(int air)
{
	system("CLS");
	switch (air)
	{
	case 1:
	{
		cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
		cout << "\t\t\t\t Welcome to Pakistan International Airlines" << endl << endl;
		cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;

		airline = "Pakistan International Airlines";
		break;
	}
	case 2:
	{
		cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
		cout << "\t\t\t\t\t Welcome To Shaheen Air" << endl << endl;
		cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
		airline = "Shaheen Air";
		break;
	}
	case 3:
	{
		cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
		cout << "\t\t\t\t Welcome To Air Blue" << endl << endl;
		cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
		airline = "Air Blue";
		break;
	}
	case 4:
	{
		cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
		cout << "\t\t\t\t Welcome To Serene Air" << endl << endl;
		cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
		airline = "Serene Air";
		break;
	}
	}


}
//*******************************************************************************
//5th Function
void intoperations(int air)//selected Airline operations.
{
	system("CLS");
	switch (air)
	{
	case 1://PIA
	{
		cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
		cout << "\t\t\t\t Welcome to Pakistan International Airlines" << endl << endl;
		cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
		airline = "Pakistan International Airlines";

		break;
	}
	case 2://Emirates
	{
		cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
		cout << "\t\t\t\t\t Welcome to Emirates" << endl << endl;
		cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
		airline = "Emirates";
		break;
	}
	case 3://Qatar airways
	{
		cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
		cout << "\t\t\t\t Welcome to Qatar Airways" << endl << endl;
		cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
		airline = "Qatar Airways";
		break;
	}
	case 4://Turkish Airlines
	{
		cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
		cout << "\t\t\t\t Welcome to Turkish Airlines" << endl << endl;
		cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
		airline = "Turkish Airlines";
		break;
	}
	case 5://American Airlines
	{
		cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
		cout << "\t\t\t\t Welcome to American Airlines" << endl << endl;
		cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
		airline = "American Airlines";
		break;
	}
	}
}
//*******************************************************************************
//6th function
void 	dombooking()
{
	int clas;
	string domcities = "LAHORE,ISLAMABAD,KARACHI,PESHAWAR,QUETTA";
	cin.ignore();
	do
	{
		cout << "\t\tTHESE ARE THE LOCAL PLACES AVAILABLE" << endl;
		cout << "LAHORE \n ISLAMABAD \n KARACHI \n PESHAWAR \n QUETTA \n";

		do
		{
			cout << "\n Please Enter  your current  city (IN CAPITAL LETTERS ONLY): ";//Input departure city
			getline(cin, depcity);
			if (depcity.empty())
			{
				system("CLS");
				cout<<"Please you have choose one of the Cities in the list.\n";
			}
			if (domcities.find(depcity) == string::npos)
			{
				system("CLS");

				cout << "\n\n Sorry, We do not operate in " << depcity << " city, \n Please choose one of the Cities in the list.\n ";
			}

		} while (domcities.find(depcity) == string::npos||depcity.empty());

		do
		{
			cout << "\n Please Enter  your Destination  city (IN CAPITAL LETTERS ONLY): ";//Input departure city
			getline(cin, arrcity);
			if (arrcity.empty())
			{
				system("CLS");
				cout << "Please you have choose one of the Cities in the list.\n";
			}
			if (domcities.find(arrcity) == string::npos)
			{
				system("CLS");
				cout << "\n\n Sorry, We do not operate in " << arrcity << " city, \n Please choose one of the Cities in the list.\n ";
			}

		} while (domcities.find(arrcity) == string::npos|| arrcity.empty());
		if (depcity == arrcity)
		{
			system("CLS");
			cout << "\n\n\t*/*/*/*/* Destination City cannot be same as Current City.*/*/*/*/*\n\n";
		}
	} while (depcity == arrcity);
	system("CLS");

	cout << " FLIGHT AVAILABLE ON THIS ROUTE" << endl;

	cout << "\n\n\n";

	cout << "*************************************" << endl;
	cout << "*     Press 1 for buisness class    *" << endl;
	cout << "*     Press 2 for economy class     *" << endl;
	cout << "*************************************" << endl << endl << endl << endl;

	do
	{
		cout << "Enter your choice" << endl;
		cin >> clas;
	} while (clas < 1 || clas > 2);

	cout << endl;
	system("CLS");
	switch (clas)
	{

	case 1:
		cout << "___________________________________________________________________________" << endl;
		cout << "|       SEAT  AVAILABLE IN BUSINESS  CLASS                                |" << endl;
		cout << "|_________________________________________________________________________|" << endl;
		break;

	case 2:
		cout << "__________________________________________________________________________" << endl;
		cout << "|       SEAT  AVAILABLE IN ECONOMY  CLASS                                 |" << endl;
		cout << "|_________________________________________________________________________|" << endl;
		break;
	}



}

//*******************************************************************************
//7th function
void 	intbooking()
{

	int clas;

	string intcities = "LONDON,BERLIN,DUBAI,NEW YORK,BEIJING,PARIS,CAPE TOWN,TOKYO,LOS ANGELES,MUMBAI";
	string domcities = "LAHORE,ISLAMABAD,KARACHI,PESHAWAR,QUETTA";
	cin.ignore();
	do
	{

		cout << "\nTHESE ARE THE Local and  International PLACES AVAILABLE\n\n\n" << endl;
		cout << "LAHORE \n ISLAMABAD \n KARACHI \n PESHAWAR \n QUETTA \n";
		cout << "LONDON \n BERLIN \n DUBAI \n NEW YORK \n BEIJING \n PARIS \n CAPE TOWN \n TOKYO \n LOS ANGELES \n MUMBAI" << endl;


		do
		{
			cout << "\n Please Enter  your current  city (IN CAPITAL LETTERS ONLY): ";//Input departure city
			getline(cin, depcity);
			if (depcity.empty())
			{
				system("CLS");
				cout << "Please you have choose one of the Cities in the list.\n";
			}
			if (intcities.find(depcity) == string::npos&&domcities.find(depcity) == string::npos)
			{
				system("CLS");
				cout << "\n\n Sorry, We do not operate in " << depcity << " city, \n Please choose one of the Cities in the list.\n ";
			}

		} while (intcities.find(depcity) == string::npos&&domcities.find(depcity) == string::npos|| depcity.empty());

		do
		{
			cout << "\n Please Enter  your Destination  city (IN CAPITAL LETTERS ONLY): ";//Input Arrival city
			getline(cin, arrcity);
			if (arrcity.empty())
			{
				system("CLS");
				cout << "Please you have choose one of the Cities in the list.\n";
			}
			if (intcities.find(arrcity) == string::npos&&domcities.find(arrcity) == string::npos)
			{
				system("CLS");
				cout << "\n\n Sorry, We do not operate in " << arrcity << " city, \n Please choose one of the Cities in the list.\n ";
			}

		} while (intcities.find(arrcity) == string::npos&&domcities.find(arrcity) == string::npos|| arrcity.empty());

		if (depcity == arrcity)
		{
			system("CLS");
			cout << "\n\n\t*/*/*/*/* Destination City cannot be same as Current City.*/*/*/*/*\n\n";

		}
	} while (depcity == arrcity);
	system("CLS");
	cout << " FLIGHT AVAILABLE ON THIS ROUTE" << endl;

	cout << "\n\n\n";

	cout << "*************************************" << endl;
	cout << "*     Press 1 for buisness class    *" << endl;
	cout << "*     Press 2 for economy class     *" << endl;
	cout << "*************************************" << endl << endl << endl << endl;

	do
	{
		cout << "Enter your choice" << endl;
		cin >> clas;
		system("CLS");
	} while (clas < 1 || clas > 2);

	cout << endl;
	system("CLS");
	switch (clas)
	{

	case 1:
		cout << "___________________________________________________________________________" << endl;
		cout << "|       SEAT  AVAILABLE IN BUSINESS  CLASS                                |" << endl;
		cout << "|_________________________________________________________________________|" << endl;
		break;

	case 2:
		cout << "__________________________________________________________________________" << endl;
		cout << "|       SEAT  AVAILABLE IN ECONOMY  CLASS                                 |" << endl;
		cout << "|_________________________________________________________________________|" << endl;
		break;
	}
}
//*******************************************************************************
//8th function
void allflights()
{
	system("CLS");
	char next;

	system("CLS");
	char l_destination[5][20] = { "LAHORE","ISLAMABAD","KARACHI","PESHAWAR","QUETTA" };
	char i_destination[10][20] = { "LONDON","BERLIN","DUBAI","NEW YORK","BEIJING","PARIS","CAPE TOWN","TOKYO","LOS ANGELES","MUMBAI" };


	int count = 0;
	for (int i = 0; i<5; i++)
	{
		system("CLS");

		count++;
		cout << "\n\n" << "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl;
		cout << "\nFOLLOWING ARE THE INTERNATIONAL FLIGHTS AVAILABLE" << endl;
		cout << "\n" << "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
		for (int j = 0; j < 10; j++)
		{
			cout << "FLIGHT FROM " << l_destination[i] << " TO " << i_destination[j] << endl;
		}
		cout << endl << endl;
		cout << "*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl << endl;
		if (count == 5)
		{
			cout << "\t__________________________________________________________________________" << endl;
			cout << "\t\t\t End of flights \n \t\t Press M to go to Main menu \n \t\tPress E to EXIT FLIGHTS Search \n";
			cout << "\t__________________________________________________________________________" << endl;
			cin >> next;
			if (next == ' M' || next == 'm')
				break;
			else if (next == 'e' || next == 'E')
			{
				system("CLS");
				if (runagain() == false)
					exit(0);
				else main();


			}
		}
		cout << "To Main Menu: Press 1.\nSearch more flights: Press any other key.";
		cin >> next;
		if (next == '1')
			break;
	}
	system("CLS");
	main();
}
//****************************************************************************
//9th FUNCTION
void timing()
{

	//Displaying Date 
	do
	{
		cout << "Today's Date is " << tMonth << "/" << tDate << "/" << tYear << endl;
		cout << "Please Select Date of your Departure : " << endl;
		cout << "Day: " << endl;
		cin >> bDate;
		cout << "Month: " << endl;
		cin >> bMonth;
		cout << "Year: " << endl;
		cin >> bYear;
		if (bDate < tDate || bMonth < tMonth || bYear < tYear || bMonth > tMonth + 1 || bYear > tYear)
		{
			system("CLS");
			cout << "\t__________________________________________________________________________" << endl;
			cout << "\t The Date has either Passed or Flight is not available, Please Select any upcoming Day upto next 2 months" << endl;
			cout << "\t__________________________________________________________________________" << endl;
		}
	} while (bDate < tDate || bMonth < tMonth || bYear < tYear || bMonth > tMonth + 1 || bYear > tYear);
	system("CLS");
	cout << "______________________________________________________________________" << endl;
	cout << "|     Following FLIGHTS are AVAILABLE ON " << bDate << "/" << bMonth << "/" << bYear << "\t\t     |" << endl;
	cout << "|____________________________________________________________________|" << endl;
	char tym;

	do
	{

		cout << "__________________________________________________________________________" << endl;
		cout << "|\t                                                                  |" << endl;
		cout << "|\t ON WHICH TIME YOU WANT TO TRAVEL                                 |" << endl;
		cout << "|\t                                                                  |" << endl;
		cout << "|\t PRESS 1 FOR 1  AM                                                |" << endl;
		cout << "|\t PRESS 2 FOR 11 AM                                                |" << endl;
		cout << "|\t PRESS 3 FOR 3  PM                                                |" << endl;
		cout << "|\t PRESS 4 FOR 8  PM                                                |" << endl;
		cout << "|\t PRESS 5 FOR 11 PM                                                |" << endl;
		cout << "|_________________________________________________________________________|" << endl;

		cin >> tym;
		if (tym < '1' || tym>'5')
		{
			system("CLS");
			cout << "__________________________________________________________________________" << endl;
			cout << "|    Please choose one of the  Flight Time in the list :                     " << endl;
			cout << "__________________________________________________________________________" << endl;
		}
	} while (tym < '1' || tym>'5');

	switch (tym)
	{
	case '1':
	{
		time = "01:00";
		aircraft = "Boeing-747";
		break;
	}
	case '2':
	{
		time = "11:00";
		aircraft = "Boeing-787";
		cout << aircraft << endl;
		break;
	}
	case '3':
	{
		time = "03:00";
		aircraft = "Airbus-A380-800";
		break;
	}
	case '4':
	{
		time = "20:00";
		aircraft = "Airbus-A320-300";
		break;
	}
	case '5':
	{
		time = "23:00";
		aircraft = "Mc Donal-Dougla-1100 ";
		break;
	}
	}
}
void data()
{
	system("CLS");
	cin.ignore();
	cout << "\n\n        ::Please enter the required information for passenger number::" << endl;
	cout << "\n\n\nEnter the firstname of passenger: ";
	getline(cin, firstname);
	cout << endl;
	cout << "Enter the lastname of passenger: ";
	getline(cin, lastname);
	cout << endl << endl;
	cout << "Enter address of passenger:  ";
	getline(cin, address);
	cout << endl << endl;
	cout << "Enter Passport No. of Passenger" << endl;
	getline(cin, passport);
	cout << endl;
	cout << endl << endl;
	cout << endl << endl;

}

void ticket()
{

	system("CLS");
	cout << "Your E-Ticket is :" << aircraft << endl;
	int t = 1;
	int r = 12345;
	cout << "|_________________________________________________________________________" << endl;
	cout << "|                                                            " << endl;
	cout << "                  ______________________________________         " << endl;
	cout << "" << "*/*/             |KHAN Travels and Tours Reservations   |          */*/" << endl;
	cout << "                 |______________________________________|         " << endl;
	cout << "|\t\t   |    " << airline << "   |\t\t\t   " << endl;
	cout << "|_________________________________________________________________________" << endl;
	cout << "|Dear Mr " << firstname << " " << lastname << endl << "|" << endl;
	cout << "|Thank you for choosing " << airline << endl << "|" << endl;
	cout << "|We look forward to welcoming you onboard." << endl << "|" << endl;

	cout << "|          " << "                                  	E - TICKET RECEIPT" << "\t  " << endl;
	cout << "|_____________________________________________________ISSUED ON: " << tDate << "/" << tMonth << "/" << tYear << endl;

	cout << "|Ticket No." << t << "                                   Booking  Reference No." << r << "\t  " << endl;
	cout << "|_________________________________________________________________________" << endl;
	cout << "|Passport No. :" << passport << "                                     " << endl;
	cout << "|__________________________________________________________________________" << endl;
	cout << "|Passenger Information :                                                  " << endl;
	cout << "|Name :" << lastname << "/" << firstname << "                                     " << endl;
	cout << "|                                                                         " << endl;
	cout << "|Address :" << address << "                                                   " << endl;
	cout << "|_________________________________________________________________________" << endl;
	cout << "|flight Information :                                                     " << endl;
	cout << "|" << "DATE: " << bDate << "/" << bMonth << "/" << bYear << "                                                             " << endl;
	cout << "|                                                                         " << endl;
	cout << "|" << "Aircraft: " << aircraft << "                                                                         " << endl;
	cout << "|STATUS: CONFIRMED" << endl;
	cout << "|_________________________________________________________________________" << endl;
	cout << "|Depart :" << depcity << "        " << time << "                                              " << endl;
	cout << "|Arrive :" << arrcity << "                                                       " << endl;
	cout << "|*BAGGAGE allowed 40 Kilos                                                " << endl;
	cout << "|*contact Airline to Confirm baggage allowance                            " << endl;
	cout << "|_________________________________________________________________________" << endl;
	cout << "|\n|\n| Notice \n|\n";
	cout << "| --To make a change to your booking, you can use the 'Manage Booking'\n| option on" << airline << ".com \n| or contact the nearest " << airline;
	cout << " office. Please refer\n| to  " << airline << ".com / contact for \n| details. \n";
	cout << "|\n| --You can check '" << airline << " flights' status at \n| " << airline << ".com/fltstatus.\n";
	cout << "|\n| --For feedback and complaints please visit \n| " << airline << ".com / tell - us. \n";
	cout << "|_________________________________________________________________________" << endl;
	cout << "|_________________________________________________________________________" << endl;

}
bool runagain()
{


	char again;
	bool run;
	do
	{
		cout << "\n\n\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
		cout << "\t\t\t Enter 'Y' to Book another Itenerery or Enter 'Q' to Exit Reservation " << endl << endl;
		cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
		cin >> again;
		if (again == 'y' || again == 'Y')
			run = true;
		else if (again == 'q' || again == 'Q')
			run = false;
		if (again != 'y'&& again != 'Y'&& again != 'q' && again != 'Q')
		{
			system("CLS");
			cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
			cout << "\t\t\t\t Please enter correct option " << endl << endl;
			cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
		}
	} while (again != 'y'&& again != 'Y'&& again != 'q' && again != 'Q');
	if (again == 'q' || again == 'Q')
	{
		system("CLS");
		cout << "                                        ______________________________________         " << endl;
		cout << "\t\t" << "        */*/           |KHAN Travels and Tours Reservations   |          */*/" << endl;
		cout << "                                       |______________________________________|         " << endl;
		cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
		cout << "\t\t\t\t\t\t THANK YOU \n\n \t\t\t\t\t\t Please do Come Visit \n\n\n" << endl;
		cout << "\t\t" << "           */*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl << endl;
		system("pause");
	}
	return run;
}
