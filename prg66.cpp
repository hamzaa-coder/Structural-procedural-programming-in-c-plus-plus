#include<iostream>
using namespace std;
#include<fstream>
struct student{
    int rollno;
    int marks;
    char name[30];
};
int main(){
    ofstream ofs("student.bin");
    int n;
    cout<<"Give Number Of Students"<<endl;
    cin>>n;
    student s[n];
    int i;
    cout<<"Give Student Data"<<endl;
    for(i=0;i<n;i++){
        cout<<"Give Roll No Of Student : "<<i+1<<endl;
        cin>>s[i].rollno;
        cout<<"Give Marks Of Student : "<<i+1<<endl;
        cin>>s[i].marks;
        cout<<"Give Name Of Student : "<<i+1<<endl;
        cin>>s[i].name;
        ofs.write(reinterpret_cast<char*>(&s),(sizeof(s)));
    }
    cout<<"Data Written "<<endl;
    ofs.close();
    return 0;
}