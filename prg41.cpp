#include<iostream>
using namespace std;
#include<conio.h>
struct p{
	long pid;
	int qty;
	int price;
};
int main ()
{
	//declaration phase//
	p p1,p2;
	//input phase//
	cout<<"Give Product I'D of First Product"<<endl;
	cin>>p1.pid;
	cout<<"Give Quantity of First Product"<<endl;
	cin>>p1.qty;
	cout<<"Give Price of First Product"<<endl;
	cin>>p1.price;
	cout<<"Give Product I'D of Second Product"<<endl;
	cin>>p2.pid;
	cout<<"Give Quantity of Second Product"<<endl;
	cin>>p2.qty;
	cout<<"Give Price of Second Product"<<endl;
	cin>>p2.price;
	
	//output phase
	cout<<"			"<<endl;
	cout<<"You Entered Following Data :: "<<endl;
	cout<<"Product I'D of First Product = "<<p1.pid<<endl;
	cout<<"Quantity of First Product = "<<p1.qty<<endl;
	cout<<"Price of First Product = "<<p1.price<<endl;
	cout<<"Product I'D of Second Product = "<<p2.pid<<endl;
	cout<<"Quantity of Second Product = "<<p2.qty<<endl;
	cout<<"Price Of Second Product = "<<p2.price<<endl;
	
	getch ();
	return 0;
}
