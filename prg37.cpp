#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int a[3][4];
	int b[4][3];
	int i,j;
	
	cout<<"Give Entries of Matrix"<<endl;
	for(i=0;i<3;i++)
	for(j=0;j<4;j++)
	cin>>a[i][j];
	
	cout<<"Transpose o Given Matrix is"<<endl;
	
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			cout<<a[j][i]<<"	";
		}
		cout<<endl;
	}
	getch ();
	return 0;
}

