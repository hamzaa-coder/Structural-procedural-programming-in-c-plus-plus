#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int sum=0,i;
	for(i=1;i<=19;i++)
	{
		sum=sum+i+(i+1);
	}
	cout<<"Result = "<<sum<<endl;
	getch();
	return 0;
}
