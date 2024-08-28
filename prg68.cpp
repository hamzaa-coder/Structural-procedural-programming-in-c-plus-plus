#include<iostream>
using namespace std;
struct student{
    int rollno;
    int marks;
    char name[20];
};
#include<fstream>
int f1(int n){
    ifstream ifs("student.bin");
    student s[n];
    cout<<"You Entered Following Data"<<endl;
    cout<<endl;
    int i=0;
    while(i<n){
        ifs.read(reinterpret_cast<char*>(&s),(sizeof(s)));
        cout<<"Roll no Of Student : "<<i+1<<" = "<<s[i].rollno<<endl;
        cout<<"Marks of Student : "<<i+1<<" = "<<s[i].marks<<endl;
        cout<<"Name of Student : "<<i+1<<" = "<<s[i].name<<endl;
        i++;
    }
    ifs.close();
}
int main(){
    ofstream ofs("student.bin");
    int n;
    cout<<"Give Number of Students"<<endl;
    cin>>n;
    student s[n];
    int i;
    for(i=0;i<n;i++){
        cout<<"Give Roll no of Student : "<<i+1<<endl;
        cin>>s[i].rollno;
        cout<<"Give Marks Of Studdent : "<<i+1<<endl;
        cin>>s[i].marks;
        cout<<"Give Name Of student : "<<i+1<<endl;
        cin>>s[i].name;
        ofs.write(reinterpret_cast<char*>(&s),(sizeof(s))); 
    }
    ofs.close();
    f1(n);
    return 0;
}