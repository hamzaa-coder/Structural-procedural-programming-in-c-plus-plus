#include<iostream>
using namespace std;
struct product {
int pid;
char pname[30];
int qty;
};
int main ()
{
product *p;
p=new product[10];
int i;
for(i=0;i<10;i++){
cout<<"Give Product I'D of Product "<<i+1<<endl;
cin>>(p+i)->pid;
cout<<"Give Name of Product "<<i+1<<endl;
cin>>(p+i)->pname;
cout<<"Give Quantity of Product "<<i+1<<endl;
cin>>(p+i)->qty;
}

cout<<"You Entered Following Data :: "<<endl;
cout<<" "<<endl;

for(i=0;i<10;i++){
cout<<"Product I'D of Product "<<i+1<<" : "<<(p+i)->pid<<endl;
cout<<"Name of Product "<<i+1<<" ; "<<(p+i)->pname<<endl;
cout<<"Quantity of Product "<<i+1<<" : "<<(p+i)->qty<<endl;
}
delete [] p;
return 0;
}
