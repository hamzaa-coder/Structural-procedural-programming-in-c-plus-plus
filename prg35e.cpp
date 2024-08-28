  #include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int m,n;
	cout<<"Enter m and n "<<endl;
	cin>>m>>n;
	int a[m][n],i,j;
	cout<<"Enter Array Values"<<endl;
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	cin>>a[i][j];
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i][i];
	}
	cout<<"Sum of First Diagonal is "<<sum<<endl;
	 sum=0;
	 for(i=0;i<n;i++)
	 {
	 	sum=sum+a[i][n-i-1];
	 }
	 cout<<"Sum of Second Diagonal is "<<sum<<endl;
	 getch ();
	 return 0 ;
}
