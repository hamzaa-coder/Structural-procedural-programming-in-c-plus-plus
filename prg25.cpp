#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int a[10],i,large,loc;
	cout<<"Give Array"<<endl;
	for(i=0;i<10;i++)
	cin>>a[i];
	large=a[0];
	loc=0;
    for(i=0;i<10;i++)
    {
    	if (a[i]>large)
    	{large=a[i];
    	loc=i;
        }
	}
	cout<<"Highest Number is :: "<<large<<endl;
	cout<<"Location of Highest Number is :: "<<loc<<endl;
	getch ();
	return 0;
}

