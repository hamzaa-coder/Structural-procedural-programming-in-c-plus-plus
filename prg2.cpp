#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	double a,b,c,d,e;
	cout<<"Enter Length"<<endl;
	cin>>a;
	cout<<"Enter Width"<<endl;
	cin>>b;
	c=a*b;
	d=2*(a+b);
	cout<<"Area is : "<<c<<" m^2-----"<<"Perimeter is : "<<d<<" m"<<endl;
	getch();
	return 0;
}
