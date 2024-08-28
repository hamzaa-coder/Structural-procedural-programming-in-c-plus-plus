#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int a[4][4],i,j,sum=0;
	cout<<"Give Array"<<endl;
	for(i=0;i<4;i++)
	for(j=0;j<4;j++)
	cin>>a[i][j];
	for(i=0;i<4;i++)
	for(j=0;j<4;j++)
	{
	   sum=sum+a[i][j];	
	}
	cout<<"Sum Of Array Values is :: "<<sum<<endl;
	getch ();
	return 0;
}
