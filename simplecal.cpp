#include<iostream>
using namespace std;
int main ()
{
	int num1,num2;
	char oper;
	cout<<"Give Operator (+,-,*,/) : "<<endl;
	cin>>oper;
	cout<<"Give Two Numbers "<<endl;
	cin>>num1>>num2;
	switch(oper)
	{
		case'+':
		    cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
		    break;
		case'-':
			cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
			break;
		case'*':
			cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
			break;
		case'/':
			cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
			break;
		default :
		cout<<"Invalid Operator"<<endl;
	}
	return 0;
}

