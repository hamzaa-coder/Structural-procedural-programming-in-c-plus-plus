#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int m,n;
	cout<<"Give order of Matrix"<<endl;
	cin>>m>>n;
	cout<<"Give Entries of Matrix"<<endl;
	int i,j;
	int a[m][n];
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	cin>>a[i][j];
	
	cout<<"You Entered Following Matrix"<<endl;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<a[i][j]<<"	";
		}
		cout<<endl;
	}
	
	//calculation
	int sum=0;
	cout<<"Sum of each column is "<<endl;
	for(j=0;j<n;j++){
		sum=0;
		for(i=0;i<m;i++){
		sum=sum+a[i][j];}
		cout<<"column "<<j+1<<" sum = "<<sum<<endl;
    }
    getch ();
    return 0;
}
