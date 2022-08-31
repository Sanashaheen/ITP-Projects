#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<conio.h>
using namespace std;
int main()
{
	string Player_Name;
	cout<<"Enter Player Name : \n";
	cin>>Player_Name;
	system("cls");
	int Rounds;
	cout<<Player_Name<<" How many rounds do you want to play ";
	cin>>Rounds;
	int Player_score=0, Computer_score=0;
	for(int round;round<Rounds;round++)
	{
		system("cls");
		int Player_Choice,Computer_Choice;
		cout<<"\n\n\t\tRound NO: "<<round<<"/"<<Rounds<<endl;
		cout<<"\t\t"<<Player_Name<<"'s socre is "<<Player_score<<endl;
		cout<<"\t\tComputer's Score is "<<Computer_score<<endl;
		cout<<"\n\t\t*****************\n";
		cout<<"\t\tPress 1 for Rock \n";
     	cout<<"\t\tPress 2 for Papaer \n";
	    cout<<"\t\tPress 3 for Scissor \n";
	    cout<<"\t\t*****************\n\n";
	   
	   	do
	   	{
	      	cout<<"\t\tEnter your choice ";
	   		cin>>Player_Choice;
	   		
		}while(Player_Choice!=1&&Player_Choice!=2&&Player_Choice!=3);
     	
     	srand(time(0));
     	Computer_Choice=(rand()%3)+1;
     	if(Player_Choice==1&&Computer_Choice==3)
     	{
     		cout<<"\t\tPlayer win."<<endl;
     		Player_score++;
		 }
	    	else  if(Player_Choice==2&&Computer_Choice==1)
            {
     		cout<<"\t\tPlayer win."<<endl;
     		Player_score++;
		    }
		 	else  if(Player_Choice==3&&Computer_Choice==2)
           	{
     		cout<<"\t\tPlayer win."<<endl;
     		Player_score++;
	    	}
	    	else if (Player_Choice==Computer_Choice)
	    	{
	    		cout<<"\t\tDraw...... "<<endl;
			}
			else
			{
				cout<<"\t\tComputer win"<<endl;
				Computer_score++;
			}
			cout<<"\t\tPress any key to continue......";
	   		getch();
	}
	if(Computer_score==Player_score)
	{
		cout<<"\t\tGame is Drawn "<<endl;
	}
	else if(Player_score>Computer_score)
	{
		cout<<"\n\t\t\Congragulations.........\n";
		cout<<endl<<"\t\t"<<Player_Name<<" You won the game: \n";
	
	}
	else
	{
		cout<<"\n\t\tComputer won the game: \n";
	}
	return 0;
}


