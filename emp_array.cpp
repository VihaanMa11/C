#include<iostream>
using namespace std;
class employ
{
	int regno,salary;
	char name[30];
	public:
	void read()
	{
		cout<<"Enter reg no ";
		cin>>regno;
		cout<<"Enter name";
		cin>>name;
		cout<<"Enter salary";
		cin>>salary;
	}
	void disp()
	{
		cout<<regno<<"\t"<<name<<"\t"<<salary<<endl;
	}
};
int main()
{
	employ e[3];
	int i;
	for(i=0;i<3;i++)
	{
	e[i].read();
	}
		for(i=0;i<3;i++)
	{
	e[i].disp();
	}
}
