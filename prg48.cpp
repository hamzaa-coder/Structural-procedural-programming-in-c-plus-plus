#include<iostream>
using namespace std;
int main ()
{
int *a;
a=new int [10];
int i;
cout<<"Give Values"<<endl;
for(i=0;i<10;i++)
cin>>a[i];

cout<<"Given Data is 😀️🙂️"<<endl;
for(i=0;i<10;i++)
{cout<<a[i]<<endl;}
delete [] a;
return 0;
}
