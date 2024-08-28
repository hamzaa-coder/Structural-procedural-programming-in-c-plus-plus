#include<iostream>
using namespace std;
struct student{
	int rollno;
	int marks;
};
#include<conio.h>
int main ()
{
	student s[10];
	int i;
	for(i=0;i<10;i++){
		cout<<"Give Roll no of Student : "<<endl;
		cin>>s[i].rollno;
		cout<<"Give Marks of Student : "<<endl;
		cin>>s[i].marks;
	}
	
	int high;
	int loc=0;
	s[0].marks=high;
	for(i=1;i<10;i++)
	{
		if(s[i].marks>high)
		{high=s[i].marks;
		loc=i;}
	}
	cout<<"Data of Student with Highest Marks is :: "<<endl;
	cout<<"Roll Number = "<<s[loc].rollno<<endl;
	cout<<"Marks = "<<s[loc].marks<<endl;
	getch ();
	return 0;
}

