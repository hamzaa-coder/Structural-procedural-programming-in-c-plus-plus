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
int low;
int a;
low=(p+0)->qty;
a=0;

for(i=1;i<10;i++){
if(low>(p+i)->qty){
low=(p+i)->qty;
a=i;
}
}


cout<<"Data of Product having Lowest Quantity is :: "<<endl;
cout<<"Product I'D : "<<(p+a)->pid<<endl;
cout<<"Product Name : "<<(p+a)->pname<<endl;
cout<<"Quantity : "<<(p+a)->qty<<endl;
delete [] p;
return 0;
}

