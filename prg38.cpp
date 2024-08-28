#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int a[3][4];
	int b[4][2];
	int c[3][2];
	int i,j,k;
	
	cout<<"Give Entries of First Matrix"<<endl;
	for(i=0;i<3;i++)
	for(j=0;j<4;j++)
	cin>>a[i][j];
	
	cout<<"Give entries of Second Matrix"<<endl;
	for(i=0;i<4;i++)
	for(j=0;j<2;j++)
	cin>>b[i][j];
	
	for(i=0;i<3;i++)
	for(j=0;j<2;j++)
	c[i][j]=0;
	
	for(i=0;i<3;i++)
	for(j=0;j<4;j++)
	for(k=0;k<2;k++)
	c[i][k]=c[i][k]+a[i][j]*b[j][k];
	cout<<"Product of Given Matrices is :: "<<endl;
	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			cout<<c[i][j]<<"	";
		}
		cout<<endl;
	}
	getch ();
	return 0;
	
}
