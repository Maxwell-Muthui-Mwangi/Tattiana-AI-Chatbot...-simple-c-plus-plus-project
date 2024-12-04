//I maxwell Muthui Mwangi I will be making a program which will act like an artificial intelligence  and will talk to the user about random things



#include<windows.h>
#include<iostream>
#include<string>

using namespace std;

int main()
{
	//variable
	char input, y , n, Y, N, name[255];
	string  gtkey;
	int age;
	
	
	
	cout<<"\t\t Welcome to Tattiana AI\n\n";
	cout<<"to continue the program type 'Y' and to end it type 'N'  - \n";
	cout<<"-----> ";
	cin>>input;
	
	//condition for when the user types Y or N
	if(input== 'y' || input== 'Y' )
	{
		cout<<"Welcome to Tattiana AI, am always happy to help or chat......>  ";
	}
	else
	{
		cout<<" \n Thanks for visiting/chatting with Tattiana AI....";
		
	}
	
	system("cls");
	
	if (gtkey != "bi")
	{
		cout<<"\t Hello User \n";
		cin>> gtkey;
		cout<<" What is your name?  \n ::";
//		cin>>name;
		cin.ignore();
    	cin.getline(name, 100);
		cout<<name <<" What is your Age? \n :: ";
		cin>>age;
//        cin>>gtkey;

			switch(age)
			{
				case 18:
					cout<< "\nYou are quite Young,,, remember to live life to the fullest";
					break;
				case 30:
					cout<<"\n Love your Age";
					break;
				default:
				    cout<<"\n You rock "<<name<<endl;	
			}
			
			cout<<" \n\n\t It was nice knowing you " <<name<<" of age "<<age<< " Bye for now \n :: ";
			cin>>gtkey;
	}
	
	cout<<"\n\n\n\n\t    Exiting Program ..............  -->  ::";
	return 0;
}