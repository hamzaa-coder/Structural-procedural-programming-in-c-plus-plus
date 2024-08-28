#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int a[3][4];
	int b[3][4];
	int i,j;
	
	cout<<"Give Entries of Matrix A"<<endl;
	for(i=0;i<3;i++)
	for(j=0;j<4;j++)
	cin>>a[i][j];
	
	cout<<"Give Entries of Matrix B"<<endl;
	for(i=0;i<3;i++)
	for(j=0;j<4;j++)
	cin>>b[i][j];
	
	int c[i][j];
	for (i=0;i<3;i++)
	for(j=0;j<4;j++)
	c[i][j]=a[i][j]+b[i][j];
	
	cout<<"Sum of Matrix A and B is :: "<<endl;
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			cout<<c[i][j]<<"	";
		}
		cout<<endl;
	}	
	getch ();
	return 0;
}
