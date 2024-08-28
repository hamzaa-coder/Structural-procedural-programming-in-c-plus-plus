#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
    long long prod=1,i;
	i=1;
	for(i=2;i<=20;i+=2)
	{
		prod*=i;
	}
	cout<<"Result = "<<prod<<endl;
	getch ();
	return 0;
}

