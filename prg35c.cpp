#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int m,n,i,j;
	cout<<"Give m and n"<<endl;
	cin>>m>>n;
	int a[m][n];
	cout<<"Enter Elements of Array"<<endl;
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	cin>>a[i][j];
	cout<<"Entered Array is :: "<<endl;
	for(i=0;i<m;i++){
	for(j=0;j<n;j++){
	cout<<a[i][j]<<"	";}
	cout<<endl;
}
	cout<<"Sum of Each Row is "<<endl;
	int sum=0;
    for(i=0;i<m;i++)
    {    sum=0;
	     for(j=0;j<n;j++){
    	sum=sum+a[i][j];}
        cout<<"Row "<<i+1<<"  sum = "<<sum<<endl;
	}
	getch ();
	return 0;
}
