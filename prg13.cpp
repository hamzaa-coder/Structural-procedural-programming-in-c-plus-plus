#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int sum=0,i,sign=1,n;
	cout<<"Enter Value Of n"<<endl;
	cin>>n;
	for (i=1;i<=n;i++)
	{
		sum=sum+i+(i+1)*sign;
		sign=sign*(-1);
	}
	cout<<"Result = "<<sum<<endl;
	getch();
	return 0;
}
