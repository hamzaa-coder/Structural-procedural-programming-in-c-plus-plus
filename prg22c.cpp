#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	long long prod=1;
	int i;
	i=2;
	do
	{
		prod*=i;
		i+=2;
	}
	while(i<=20);
	cout<<"Result = "<<prod<<endl;
	getch ();
	return 0;
 } 
