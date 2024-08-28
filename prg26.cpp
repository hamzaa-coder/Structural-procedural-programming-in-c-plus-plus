#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int a[10],i,sum=0;
	cout<<"Give Array"<<endl;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<10;i++)
	{
		sum=sum+a[i];
	}
	cout<<"Sum Of Give Array is :: "<<sum<<endl;
	getch();
	return 0;
}
