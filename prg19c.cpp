#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int sum=0,i;
	i=0;
	do{
		sum=sum+i;
		i+=2;
	}
	while(i<=20);
	cout<<"Sum of series is : "<<sum<<endl;
	getch();
	return 0;
}
