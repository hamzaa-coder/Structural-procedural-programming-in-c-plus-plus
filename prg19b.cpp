#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int sum=0,i;
	i=0;
	while(i<=20)
	{
		sum=sum+i;
		i+=2;
	}
	cout<<"Result = "<<sum<<endl;
	getch ();
	return 0;
}
