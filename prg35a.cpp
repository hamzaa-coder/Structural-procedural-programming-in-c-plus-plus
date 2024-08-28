#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int m,n,i,j,large;
	cout<<"Give m and n "<<endl;
	cin>>m>>n;
	int a[m][n];
	cout<<"Give Array Entries"<<endl;
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	cin>>a[i][j];
	large=a[0][0];
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	if(a[i][j]>large)
	large=a[i][j];
	cout<<"Highest Entry is "<<large<<endl;
	getch ();
	return 0;
}
