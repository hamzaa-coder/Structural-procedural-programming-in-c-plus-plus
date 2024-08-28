#include<iostream>
using namespace std;
struct book{
	int bid;
	string title;
	int price;
};
#include<conio.h>
int main ()
{
	book b[10];
	int i;
	for(i=0;i<10;i++)
	{
		cout<<"Give Book I'D"<<endl;
		cin>>b[i].bid;
		cout<<"Give Book Title "<<endl;
		cin>>b[i].title;
		cout<<"Give Book Price"<<endl;
		cin>>b[i].price;
	}
	
	int low;
	int loc;
	low=b[0].price;
	loc=0;
	for(i=1;i<10;i++)
	{
		if(b[i].price<low)
		{
			low=b[i].price;
			loc=i;
		}
	}


    cout<<"Book Having Lowest Price is :: "<<b[loc].price<<endl;
	cout<<"Book I'd Of Book Having Lowest Price is :: "<<b[loc].bid<<endl;
	cout<<"Title of Book Having Lowest Price is :: "<<b[loc].title<<endl;
	getch ();
	return 0;
}
