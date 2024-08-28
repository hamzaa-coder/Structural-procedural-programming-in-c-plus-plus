#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int prod=1,i,n;
	cout<<"Give n"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		prod=prod*i;
	}
	cout<<"Factorial is = "<<prod<<endl;
	getch ();
	return 0;
}
