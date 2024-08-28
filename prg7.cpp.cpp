#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int a,b,c,d,e,sum=0;
	cout<<"Enter 5 Numbers"<<endl;
	cin>>a>>b>>c>>d>>e;
	if(a%2==0)
	sum=sum+a;
	if(b%2==0)
	sum+=b;
	if(c%2==0)
	sum+=c;
	if(d%2==0)
	sum+=d;
	if(e%2==0)
	sum+=e;
	cout<<"Sum Of Even Numbers is "<<sum<<endl;
	getch ();
	return 0;
}

