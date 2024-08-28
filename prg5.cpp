#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int a,b,c,d,e,f;
	cout<<"Enter Values of A, B and C"<<endl;
	cin>>a>>b>>c;
	d=(b*b)-4*a*c;
	e=(-b+d)/2*a;
	f=(-b-d)/2*a;
	if (d>0)
	{
		cout<<"X1 = "<<e<<endl;
		cout<<"X2 = "<<f<<endl;
	}
	else
	{
		cout<<"Invalid Values"<<endl;
	}
	getch();
	return 0;
	
}
