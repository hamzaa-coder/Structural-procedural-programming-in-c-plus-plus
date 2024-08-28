#include<iostream>
using namespace std;
#include<conio.h>
int main ()
{
	int a,b,c,d,e,f;
	cout<<"Enter Obtained Marks"<<endl;
	cin>>a>>b>>c>>d>>e;
	int average;
	average = (a+b+c+d+e)/5;
	if (average>=50)
	{
		cout<<"Congratulations,You have passed with an average of : "<<average<<" %"<<endl;
	}
	else
	{
		cout<<"Unfortunately,You have Failed with an average of : "<<average<<" %"<<endl;
	}
	getch();
	return 0;
}

