#include<iostream>
#include<windows.h>
#include<conio.h>
#include<cstdlib>
using namespace std;
void displayintro();
void gamesrule();
int main()
{

bool ans=0;                  //boolean to check is it is win or lose
displayintro();              // To display the intro
string name;		     // To enter Name of player
int amount;                  //  To enter amount
char input;
cout<<"Enter name  :   ";
getline(cin,name);            // player name :James Bond
cout<<endl;
cout<<"Enter input your amount $ :   ";         
cin>>amount;                  // amount : 500$
cout<<endl;
do
{
gamesrule();                 // display game rules
                  
//game code

int depositmoney;            

amount:
cout<<"Enter amount you want to bet in $ : ";
cin>>depositmoney;           // enter the deposit
cout<<endl;
if(depositmoney>amount)
{
	cout<<"Invalid input";
	cout<<" You have not enough money"<<endl;
	goto amount;
}

int ballnum=rand()%10+1; 
int guess;

inputmethod:
cout<<"Enter input method : "<<endl;
cout<<"Press 1 if you want to input your guessing number where ball will stop "<<endl;
cout<<"Press 2 if you think that the number where ball will stop is even number "<<endl;
cout<<"Press 3 if you think that the number where ball will stop is odd number "<<endl;
cout<<"Enter input :   ";
cin>>guess;
cout<<endl;
if(guess==1)
{
	int number;
	cout<<"Enter input guessing number in between 1-10  :      ";
	cin>>number;
	cout<<endl;
	if(number==ballnum)
	{
		ans=1;
	}
	else
	{
		ans=0;
	}
}
else if(guess==2) 
{
	if(ballnum%2==0)
	{
		ans=1;
	}
	else
	{
		ans=0;
	}
}
else if(guess==3)
{
	if(ballnum%2!=0)
	{
		ans=1;
	}
	else
	{
		ans=0;
	}	
}
else
{
	cout<<"Invalid input method "<<endl;
	goto inputmethod;
}

if(ans==1)
{
	cout<<"Congratulations !!! you win...!!!! "<<endl;
	cout<<"You have win the $"<<depositmoney*10<<endl;
	amount=amount+depositmoney*10;
        cout<<amount;
        cout<<"/n/n***************************************************";
}
else
{
	cout<<"Sorry ";
	cout<<"You lose $"<<depositmoney<<endl;
         amount=amount-depositmoney;	
        cout<<amount;
        cout<<"/n/n***************************************************";
}
cout<<"Would you like to play again y/n 		:		";
cin>>input;
cout<<endl;
if(amount==0)
{
	cout<<"You have not enough money to play"<<endl;
	break;
}
}while(input!='n');

cout<<name<<" , "<<" you have "<<amount<<"$"<<endl;
cout<<"\n\n######################################################################################"<<endl;
}

void displayintro()
{
		
string intro="\n--------------------------------------------------------------------------------------"
 "\n   ######      #        #########   #########  ##    ##    ########   "
 "\n ##          #  #      ##             ###     ## #   ##   ##      ##  "
 "\n##          #    #     #########      ###     ##  #  ##   ##      ##  "
 "\n ##        ########           ##      ###     ##   # ##   ##      ##  " 
 "\n   #####  #        #   #########   #########  ##     ##    ########   "  
 "\n-------------------------------------------------------------------------------------------------\n";
 for(int i=0;i<intro.size();i++)
 {
 	Sleep(10);
 	cout<<intro[i];
 }
}

void gamesrule()
{
	 system("cls");
	   cout << "\n\n";
      cout<<"\n\n-----------------------------------------------------------------------------------------\n\n";
    cout << "\t\t: RULES OF THE CASINO :\n";
       cout<<"\n\n----------------------------------------------------------------------------------------\n\n";
    cout << "\t 1.) You can choose any number between 1 to 10.\n";
    cout << "\t 2.) If you win the bet , your money will get 10 times of money you bet in.\n";
    cout << "\t 3.) If you bet on the wrong number your money will lose from your amount.\n\n";
   cout<<"\n\n----------------------------------------------------------------------------------------------\n\n";
}