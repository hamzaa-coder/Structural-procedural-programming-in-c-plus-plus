#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int n;
	cout<<"Give n "<<endl;
	cin>>n;
	int i;
	int sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<"Sum of Series is : "<<sum<<endl;
	getch ();
	return 0;
}
