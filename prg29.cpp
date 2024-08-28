#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int a[2][3],i,j;
	cout<<"Give Array"<<endl;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++)
       cin>>a[i][j];}
		cout<<"Entered Array is = "<<endl;
	for(i=0;i<2;i++)
	 {
	  for(j=0;j<3;j++){
    	cout<<a[i][j]<<"	";}
		cout<<endl;
	  }
	  getch();
	  return 0;
}
