#include<iostream>
using namespace std;
class student
{
	int rno,marks;
	char name[30];
	public:
	void read()
	{
		cout<<"Enter roll no ";
		cin>>rno;
		cout<<"Enter name";
		cin>>name;
		cout<<"Enter marks";
		cin>>marks;
	}
	void disp()
	{
		cout<<rno<<"\t"<<name<<"\t"<<marks<<endl;
	}
};
int main()
{
	student s[3];
	int i;
	for(i=0;i<3;i++)
	{
	s[i].read();
	}
		for(i=0;i<3;i++)
	{
	s[i].disp();
	}
}
