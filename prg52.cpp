#include<iostream>
using namespace std;
struct student{
int rollno;
char name[30];
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

int high;
int a;
high=(s+0)->marks;
a=0;
for(i=1;i<10;i++){
if((s+i)->marks>=high){
high=(s+i)->marks;
a=i;}
}

cout<<"Data of Student having Highest Marks is :: "<<endl;
cout<<"Roll No : "<<(s+a)->rollno<<endl;
cout<<"Name : "<<(s+a)->name<<endl;
cout<<"Marks : "<<(s+a)->marks<<endl;

delete [] s;
return 0;
}



