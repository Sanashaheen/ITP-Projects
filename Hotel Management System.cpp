#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
//all classes inherited from eachother this conecpt called multilevel inheritance
class hotel//base class 
{
public:
	void hotel_name()
	{
		cout << "\n\t\t *********************\n";
		cout << "\t\t  *                    *\n";
		cout << "\t\t  *    welcome to      *\n";
		cout << "\t\t  *      Sana          *\n";
		cout << "\t\t  *        &           *\n";
		cout << "\t\t  *      Iqra's        *\n";
		cout << "\t\t  *      Hotel         *\n";
		cout << "\t\t  *                    *\n";
		cout << "\t\t  **********************\n";
	}
};
class customer :public hotel//child class inherite from hotel class
{
protected:
	string  name;
	string adress;
	string phone;
	char from_date_customer[100];
	char to_date_customer[100];
	int booking_id;
	int roomNo;
	int TotalDays;
public:
	
	void add_coustomerDetails()
	{
		cout << "Enter room number : ";
		cin >> roomNo;
		cout << "\nBooking ID : ";
		cin >> booking_id;
		cout << "\nEnter the customer's name: ";
		cin.ignore();
		getline(cin, name);
		cout << "\nEnter address: ";
		getline(cin, adress);
		cout << "\nEnter phone number :";
		getline(cin, phone);
		cout << "\nEnter from date : ";
		cin.getline(from_date_customer, 100);
		cout << "\nEnter to date : ";
		cin.getline(to_date_customer, 100);
		cout << "\nEnter No. of Days: ";
		cin >> TotalDays;
	}
	virtual void show()//function overriding
	{
		cout << "\n\tBooking confirmed\n\n ";
		cout << "\tcheck customer details :";
		cout << "\n\tName : " << name;
		cout << "\n\tAdress : " << adress;
		cout << "\n\tPhone no : " << phone;
		cout << "\n\tFrom date : ";
		for (int i = 0; i < 100; i++) {
			cout << from_date_customer[i];
		}
		cout << "\n\tTo date : ";
		for (int i = 0; i < 100; i++) {
			cout << to_date_customer[i];
		}
		cout << "\n\tTotal Days : " << TotalDays;
	}
	customer()
	 {
		for (int i = 0; i < 100; i++)
		{
			from_date_customer[i] = '\0';
			to_date_customer[i] = '\0';
			TotalDays=0;
			booking_id=0;
		}
	}
	~customer()
	{
		cout<<"\ncustomer class destructor called : \n";
	}
};
class room :public customer//inherte from customer class
{
protected:
	char comfort[100];
	char from_date[100];
	char to_date[100];
	char booking_type[100];
	char room_type[100];
	int rant;
public:
	int room_no;
	void add_room()
	{
		cout << "\nEnter room no : ";
		cin >> room_no;
		cout << "\nType comfort AC/Non AC (A/C)  :";
		cin.ignore();
		cin.getline(comfort, 100);
		cout << "\n advance booking or current booking :A/C  : " ;
		cin.getline(booking_type, 50);
		cout << "\n single bed room or double bed room : S/D  : ";
		cin.getline(room_type, 10);
		cout << "\nPer Day Rent : ";
		cin >> rant;
		cout << "\nYour Data added successfully ! ";
	}
	room()
	 {
		for (int i = 0; i < 100; i++) {
			comfort[i] = '\0';
			from_date[i] = '\0';
			to_date[i] = '\0';
			booking_type[i] = '\0';
			room_type[i] = '\0';
		}
		rant=0;
	}
};

class displaybooking :public room
{
public:
	void show()
	{
		cout << "\n\t****************************\n";
		cout << "\t*                           *\n";
		cout << "\t*     Booking confirmed     *\n";
		cout << "\t*   check customer details  *\n";
		cout << "\t*                           *\n";
		cout << "\t*****************************\n\n";
		cout << "\n\tName : " << name;
		cout << "\n\tAddress : " << adress;
		cout << "\n\tPhone no : " << phone;
		cout << "\n\tFrom date : ";
		for (int i = 0; i < 100; i++) {
			cout << from_date_customer[i];
		}
		cout << "\n\tTo date : ";
		for (int i = 0; i < 100; i++) {
			cout << to_date_customer[i];
		}
		cout << "\n\tTotal Days : " << TotalDays;
		cout << "\n\tPer day rent : " << rant;
	}
};

class searchRoom :public displaybooking
{
public:
	void searcRoom()
	{
		int count;
		if (sizeof room_no == 100)
		{
			cout << "All room are reserved ";
		}
		else
			cout << "\n\nRoom is available \n";
	}
};
class checkout :public searchRoom
{
protected:
	int total_bill;
public:
	checkout(){
		total_bill=0;
	}
	void show_bill()
	{
		cout << "\t*****************************\n";
		cout << "\t*         Final Bill        *\n";
		cout << "\t*****************************\n";
		
		cout <<"\n\tName : " << name;
		cout<<"\n\tBooking ID : "<<booking_id;
		cout<<"\n\tRoom no : "<<roomNo;
		cout << "\n\tTotal days : " << TotalDays;
		total_bill = rant * TotalDays;
		cout << "\n\n\tTotal Bill : " << total_bill;
	}
};
class main_manu : public checkout
{
public:
	void ShowMenu()
	{
		cout << "\n\t****************************\n";
		cout << "\t*                           *\n";
		cout << "\t*        MAIN MENU          *\n";
		cout << "\t*                           *\n";
		cout << "\t*****************************\n\n";
		cout << "\t1.Add Room\n";
		cout << "\t2.Check-In Room\n";
		cout << "\t3.Confirmation\n";
		cout << "\t4.Available Room\n";
		cout << "\t5.Check_out Room\n";
		cout << "\t6.Exit\n";
		cout << "\n\toption : ";
	}
};
int main()
{
	hotel* h;//polymorphisum concept
	main_manu m;
	h->hotel_name();
	h=&m;
	cout << "\n\nPress any key to show menu";
	getch();
	int option = 0;
	while (option != 6) {
	Menu:
		system("cls");
		m.ShowMenu();
		cin >> option;
		system("cls");
		switch (option) {
		case 1:
			system("cls");
			m.add_room();
			cout << "\n\nPress any key to retrun to menu\n";
			getch();
			goto Menu;
			break;
		case 2:
			m.add_coustomerDetails();
			cout << "\n\nPress any key to retrun to menu\n";
			getch();
			goto Menu;
			break;
		case 3:
			m.show();
			cout << "\n\nPress any key to retrun to menu\n";
			getch();
			goto Menu;
			break;
		case 4:
			m.searcRoom();
			cout << "\n\nPress any key to retrun to menu\n";
			getch();
			goto Menu;
			break;
		case 5:
			m.show_bill();
			cout << "\n\nPress any key to return to menu\n";
			getch();
			goto Menu;
			break;
			case 6:
			cout << "\n\n\t\t***********************************************\n";
		    cout << "\t\t     Thank you for visiting our hotel              \n";
		    cout << "\t\t***************************************************\n";
		
		}
	}
	return 0;
}
