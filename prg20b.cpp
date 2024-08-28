#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int sum=0,i;
	i=1;
	while(i<=19)
	{
		sum=sum+i+(i+1);
	     i++;
	}
	cout<<"Result = "<<sum<<endl;
	getch();
	return 0;
}
