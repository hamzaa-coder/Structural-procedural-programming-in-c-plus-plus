#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int a[10],i,large;
	cout<<"Give Array"<<endl;
	for(i=0;i<=10;i++)
	cin>>a[i];
	large = a[0];
	for(i=1;i<10;i++)
	if(a[i]>large)
	large=a[i];
	cout<<"Highest Number is :: "<<large<<endl;
	getch();
	return 0;
}
