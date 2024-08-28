#include<iostream>
using namespace std;
#include<conio.h>
struct A
   {
	int i;
	float j;
   };
int main ()
{
	A a1,a2;
	cout<<"Give a1 Structure Values "<<endl;
	cin>>a1.i>>a1.j;
	cout<<"Give a2 Structure Values"<<endl;
	cin>>a2.i>>a2.j;
	
	cout<<"You Input Following Values"<<endl;
	cout<<"a1.i = "<<a1.i<<"  a1.j = "<<a1.j<<endl;
	cout<<"a2.i = "<<a2.i<<"  a2.j = "<<a2.j<<endl;
	getch ();
	return 0;
}
