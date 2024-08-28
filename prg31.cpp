#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int a[3][4][2],i,j,k;
	cout<<"Give Array"<<endl;
	for(i=0;i<3;i++)
	for(j=0;j<4;j++)
	for(k=0;k<2;k++)
	cin>>a[i][j][k];
	cout<<"Entered Array is"<<endl;
	for(i=0;i<3;i++)
	for(j=0;j<4;j++)
	for(k=0;k<2;k++)
	cout<<a[i][j][k]<<endl;
	getch ();
    return 0;
}
