#include<iostream>
using namespace std;
void show()
{
	cout << "\n**********Manu************\n";
	cout << "1.Balance\n";
	cout << "2.Deposite\n";
	cout << "3.Withdraw\n";
	cout << "4.Exist\n";
	cout<<"****************************\n";
}
int main()
{
	int option;
		double balance=500;
	//balnce,withdraw,deposite
	do
	{
	show();
	cout << "option : ";
	cin >> option;
	system ("cls");
	switch (option)
	{
		case 1:cout<<"Balance is :"<<balance;break;
		case 2:cout<<"deposite:";
		double deposite;
		cin>>deposite;
		balance+=deposite;
		break;
		case 3:cout<<"withdraw amount :";
		double withdraw;
		cin>>withdraw;
		if(withdraw<=balance)
		{
			balance-=withdraw;	
		}
		else 
		cout<<"not enoung money:";
		break;
	}
}while(option!=4);
cout<<"Thank you ";
}
