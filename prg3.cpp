#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int A,B,C ;
	cout<<"Enter Three Numbers"<<endl;
	cin>>A>>B>>C;
	if (A>B)
	{
		if (A>C)
		cout<<A<<" is Highest Number"<<endl;
		else
		cout<<C<<" is Highest Number"<<endl;
	}
	else if (B>A)
	{
		if(B>C)
		cout<<B<<" is Highest Number"<<endl;
		else
		cout<<C<<" is Highest Number"<<endl;
	}
	getch();
	return 0;
}
