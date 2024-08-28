#include<iostream>
using namespace std;
int main ()
{
	int m,n;
	cout<<"Give Order of Matrix"<<endl;
	cin>>m>>n;
	int a[m][n];
	int i,j;
	cout<<"Give entries of Matrix"<<endl;
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	cin>>a[i][j];
	
	cout<<"You Entered Following Data"<<endl;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<a[i][j]<<"	";
		}
		cout<<endl;
	}
	int high;
	cout<<"Highest number in each Row is "<<endl;
	for(i=0;i<m;i++){
		a[i][0]=high;
		for(j=0;j<n;j++){
			if(a[i][j]>high)
			{high=a[i][j];}
		}
		cout<<"Row "<<i+1<<" :: "<<high<<endl;
	}
	return 0;
	
	
}
