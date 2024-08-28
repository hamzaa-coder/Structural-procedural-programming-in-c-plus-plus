#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int sum=0,i;
	i=1;
	do
	{
		sum=sum+i+(i+1);
		i+=1;
    }
    while(i<=19);
    cout<<"Sum of Series is : "<<sum<<endl;
    getch ();
    return 0;
}
