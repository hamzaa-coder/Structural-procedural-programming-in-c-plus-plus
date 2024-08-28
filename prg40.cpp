#include<iostream>
using namespace std;
struct student{
	int rollno;
	int marks;
};
#include<conio.h>
int main ()
{
	student s1,s2;
	cout<<"Give Roll number of First Student"<<endl;
	cin>>s1.rollno;
	cout<<"Give Marks Of First Student "<<endl;
	cin>>s1.marks;
	cout<<"Give Roll number of second Student"<<endl;
	cin>>s2.rollno;
	cout<<"Give Marks of Second Student"<<endl;
	cin>>s2.marks;
	
	cout<<"You Entered Following Data :: "<<endl;
	cout<<"Roll number of First Student : "<<s1.rollno<<endl;
	cout<<"Marks of First Student : "<<s1.marks<<endl;
	cout<<"Roll Number of Second Student : "<<s2.rollno<<endl;
	cout<<"Marks Of Second Student : "<<s2.marks<<endl;
	
	getch ();
	return 0;
}
