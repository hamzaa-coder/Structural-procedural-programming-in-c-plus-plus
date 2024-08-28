#include<iostream>
#include<fstream>
using namespace std;
struct student{
    int rollno;
    int marks;
    char name[20];
};
int main(){
    student s[2];
    ofstream ofs("a.txt");
    int i;
    for(i=0;i<2;i++){
        cout<<"Give Roll no "<<endl;
        cin>>s[i].rollno;
        ofs<<s[i].rollno<<endl;
        cout<<"Give Marks "<<endl;
        cin>>s[i].marks;
        ofs<<s[i].marks<<endl;  
        cout<<"Give Name "<<endl;
        cin>>s[i].name;
        ofs<<s[i].name<<endl;
    }
    ofs.close();
    cout<<"Data Written"<<endl;
}