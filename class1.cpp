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
	student s1,s2;
	s1.read();
	s2.read ();
	s1.disp ();
	s2.disp ();
}
