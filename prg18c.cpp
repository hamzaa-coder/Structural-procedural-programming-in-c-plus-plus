#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int n;
	cout<<"Give n "<<endl;
	cin>>n;
	int sum=0;
	int i;
	i=0;
	do{
		sum=sum+i;
		i++;
	}
	while(i<=n);
	cout<<"Sum of Series is : "<<sum<<endl;
	getch ();
	return 0;
}
