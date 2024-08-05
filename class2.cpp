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
	employ e1,e2;
	e1.read();
	e2.read ();
	e1.disp ();
	e2.disp ();
}
