#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int a,b,c;
	cout<<"Enter Value of A and B"<<endl;
	cin>>a>>b;
	c=(a*a)+(b*b)+2*a*b;
	if (a>b)
	{
		cout<<c<<endl;
	}
	else
	{
		cout<<"Invalid Values"<<endl;
	}
	getch();
	return 0;
}
