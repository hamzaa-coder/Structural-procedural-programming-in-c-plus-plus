#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int a[10],i,sum=0;
	cout<<"Enter Array"<<endl;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}cout<<"Even numbers in Array are ::"<<endl;
	for(i=0;i<10;i++)
	{
		if (a[i]%2==0)
        cout<<a[i]<<endl;
    }
	getch();
	return 0;
}
