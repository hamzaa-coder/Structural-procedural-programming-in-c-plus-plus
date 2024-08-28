#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int n;
	cout<<"Give n"<<endl;
	cin>>n;
	int sum=0;
	int i;
	int sign=1;
	for(i=1;i<=n;i++)
	{
		sum=sum+((i+(i+1)*sign))*sign;
		sign*=(-1);
	}
	cout<<"Sum of series is : "<<sum<<endl;
	getch();
	return 0;
}
