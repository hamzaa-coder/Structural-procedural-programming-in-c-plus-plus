#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int a[10],i;
	cout<<"Give Array Values"<<endl;
	for (i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<endl;
	}
	getch();
	return 0;
}
