#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int sum=0,sign=1,i,n;
	cout<<"Give n"<<endl;
	cin>>n;
	i=1;
	do
	{
		sum=sum+(i-(i+1)*sign)*sign;
		i++;
		sign=sign*(-1);
	}while(i<=n);
	cout<<"Result = "<<sum<<endl;
	getch ();
	return 0;
}
