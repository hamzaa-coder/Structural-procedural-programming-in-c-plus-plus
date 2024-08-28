#include<iostream>
using namespace std;
#include<fstream>
struct student{
    int rollno;
    int marks;
    char name[20];
};
int main(){
    student s[2];
    ifstream ifs("a.txt");
    int i;
    for(i=0;i<2;i++){
        ifs>>s[i].rollno;
        cout<<"Roll no "<<s[i].rollno<<endl;
        ifs>>s[i].marks;
        cout<<"Marks "<<s[i].marks<<endl;
        ifs.ignore();
        ifs.getline(s[i].name,20);
        cout<<"Name "<<s[i].name<<endl;

    }
    ifs.close();
    return 0;
}