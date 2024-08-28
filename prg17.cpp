#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int sum=0;
	int i;
	i=1;
	while(i<=19)
	{
		sum=sum+i;
		i+=2;
	}
	cout<<"Sum of Given Series is = "<<sum<<endl;
	getch();
	return 0;
}
