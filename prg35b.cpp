#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int m,n,i,j,sum=0;
	cout<<"Give m and n"<<endl;
	cin>>m>>n;
	int a[m][n];
	cout<<"Give Array Entries"<<endl;
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	cin>>a[i][j];
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	if(a[i][j]%2==0)
	sum=sum+a[i][j];
	cout<<"Sum of Even Numbers is :: "<<sum<<endl;
	getch ();
	return 0;
}

