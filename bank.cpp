#include<iostream>
using namespace std;
class Bank
{
	int acno,bal;
	char name[30];
	public:
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
};
int main()
{
	Bank b[100];
	int i=0,ch,j;
	do
	{
		cout<<"press 1 for new a/c"<<endl;
		cout<<"press 2 to display "<<endl;
		cout<<"press 3 to exit "<<endl;
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
	}while(ch<=2);
}
