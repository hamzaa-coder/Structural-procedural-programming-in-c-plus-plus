#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int a[3][4],i,j;
	cout<<"Give Array "<<endl;
	for(i=0;i<3;i++)
	for(j=0;j<4;j++)
	{
		cin>>a[i][j];
	}
	cout<<"Given Array is "<<endl;
	for(i=0;i<3;i++){
	for(j=0;j<4;j++){
	cout<<a[i][j]<<"	";}
	cout<<endl;
}
	getch ();
	return 0;
}
