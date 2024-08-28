#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int sum=0,sign =1,i;
	for(i=1;i<=20;i++)
	{
		sum=sum+i*sign;
		sign=sign*(-1);
	}
	cout<<"Result = "<<sum<<endl;
	getch ();
	return 0;
}


