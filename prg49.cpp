#include<iostream>
using namespace std;
struct student{
char name [30];
int rollno;
int marks;
};
int main ()
{
student *s;
s=new student [10];
int i;
for(i=0;i<10;i++){
cout<<"Give Roll no of Student "<<i+1<<endl;
cin>>(s+i)->rollno;
cout<<"Give Name of Student "<<i+1<<endl;
cin>>(s+i)->name;
cout<<"Give Marks of Student "<<i+1<<endl;
cin>>(s+i)->marks;
}

cout<<"You input Following Data :: "<<endl;

for(i=0;i<10;i++){
cout<<"Roll no of Student "<<i+1<<": "<<(s+i)->rollno<<endl;
cout<<"Name of Student "<<i+1<<":  "<<(s+i)->name<<endl;
cout<<"Marks of Student "<<i+1<<": "<<(s+i)->marks<<endl;
}
delete [] s;
return 0;
}



