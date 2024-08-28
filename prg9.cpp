#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int sum=0,i;
	for (i=1;i<=99;i+=2)
	{
		sum=sum+i;
	}
	cout<<"Result = "<<sum<<endl;
	getch();
	return 0;
}

