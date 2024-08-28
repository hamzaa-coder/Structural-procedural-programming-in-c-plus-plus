#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int a,b,c,d,e;
	cout<<"Enter Obtained Marks"<<endl;
	cin>>a>>b>>c>>d>>e;
	int f=0;
	if (a>=40){f++;}
	if (b>=40){f++;}
	if (c>=40){f++;}
	if (d>=40){f++;}
	if (e>=40){f++;}
	if (f>=3)
	cout<<"Pass"<<endl;
	else
	cout<<"Fail"<<endl;
	getch();
	return 0;
}

