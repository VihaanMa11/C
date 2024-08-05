#include<iostream>
using namespace std;
class Bank
{
	int acno,bal;
	char name[30];
	public:
		int get_ac()
		{
			return acno;
		}
	void read()
	{
		cout<<"Enter Account no ";
		cin>>acno;
		cout<<"Enter name ";
		cin>>name;
		cout<<"Enter bal ";
		cin>>bal;
	}
	void disp()
	{
		cout<<acno<<"\t"<<name<<"\t"<<bal<<endl;
	}
	void deposit(int amt)
	{
		bal=bal+amt;
		cout<<"amount deposited succesfully.....updated balance is : "<<bal<<endl;
	}
	void withdraw(int amt)
	{
		bal=bal-amt;
		cout<<"amount withdrawn succesfully.....updated balance is : "<<bal<<endl;
	}	
};
int main()
{
	Bank b[100];
	int i=0,ch,j,ac,amt;
	do
	{
		cout<<"press 1 for new a/c "<<endl;
		cout<<"press 2 to display "<<endl;
		cout<<"press 3 to search "<<endl;
		cout<<"press 4 to deposit amount "<<endl;
		cout<<"press 5 to withdraw amount "<<endl;
		cout<<"press 6 to exit "<<endl;
		cout<<"enter your choice "<<endl;
		cin>>ch;
		if(ch==1)
		{
			b[i].read();
			i++;
		}
		else if(ch==2)
		{
			for(j=0;j<i;j++)
			{
				b[j].disp();
			}
		}
		else if(ch==3)
		{
			cout<<"enter the a/c no to be searched ";
			cin>>ac;
			for(j=0;j<i;j++)
			{
				if(b[j].get_ac()==ac)
				{
					b[j].disp();
				}
			}
		}	
		else if(ch==4)
		{
			cout<<"enter the a/c no for deposit ";
			cin>>ac;
			for(j=0;j<i;j++)
			{
				if(b[j].get_ac()==ac)
				{
					cout<<"enter the amount ";
					cin>>amt;
					b[j].deposit(amt);
				}
			}
		}
		else if(ch==5)
		{
			cout<<"enter the a/c no to withdraw ";
			cin>>ac;
			for(j=0;j<i;j++)
			{
				if(b[j].get_ac()==ac)
				{
					cout<<"enter the amount ";
					cin>>amt;
					b[j].withdraw(amt);
				}
			}
		}	
		else if(ch==6)
		{
			break;
		}
		else
		{
			cout<<"Invalid choice";
		}
		
	}while(ch<=5);
}
