#include<iostream>
using namespace std;
struct product{
	int pid;
	int qty;
};
#include<conio.h>
int main ()
{
	product p[10];
	int i;
	
	for(i=0;i<10;i++)
	{
		cout<<"Give Product I'D "<<endl;
		cin>>p[i].pid;
		cout<<"Give Product Quantity "<<endl;
		cin>>p[i].qty;
	}
	
	int high;
	int loc=0;
	high=p[0].qty;
	for(i=1;i<10;i++)
	{
		if(p[i].qty>high)
		{high=p[i].qty;
		loc=i;}
		
	}
	
	cout<<"Product I'D of Product Having Highest Quantity is "<<p[loc].pid<<endl;
	cout<<"Product With Highest Quantity is "<<p[loc].qty<<endl;
	getch ();
	return 0;
}
