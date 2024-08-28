#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int sum=0,n,i;
	cout<<"Enter Value of n"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<"Result = "<<sum<<endl;
	getch();
	return 0;
}
