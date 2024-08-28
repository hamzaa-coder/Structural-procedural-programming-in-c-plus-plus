#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
struct student{
    int rollno;
    char name[30];
    int marks;
};
void AddData(){
    student s;
    cout<<"Give Student Data"<<endl;
    cin>>s.rollno>>s.name>>s.marks;
    ofstream ofs("student.bin",ios_base::app | ios_base::binary);
    ofs.write(reinterpret_cast<char*>(&s),sizeof(s));
    ofs.close();
    cout<<"Data Written Successfully"<<endl;
}
void DisplayData(){
    ifstream ifs("student.bin",ios_base::binary);
    student s;
    while(ifs.read(reinterpret_cast<char*>(&s),sizeof(s))){
        cout<<"Roll no "<<s.rollno<<endl;
        cout<<"Name "<<s.name<<endl;
        cout<<"Marks "<<s.marks<<endl;
    }
    ifs.close();
}
void ModifyData(){
    student s;
    int r;
    cout<<"Give Roll no Of Student You Want To Modify"<<endl;
    cin>>r;
    ofstream ofs("temp.bin",ios_base::binary);
    ifstream ifs("student.bin",ios_base::binary);
    while(ifs.read(reinterpret_cast<char*>(&s),sizeof(s))){
    if(s.rollno==r){
        cout<<"Give New Data"<<endl;
        cin>>s.rollno>>s.name>>s.marks;
        }
    ofs.write(reinterpret_cast<char*>(&s),(sizeof(s)));
    }
    ofs.close();
    ifs.close();
    ifstream ifs2("temp.bin",ios_base::binary);
    ofstream ofs2("student.bin",ios_base::binary);
    while(ifs2.read(reinterpret_cast<char*>(&s),sizeof(s))){
        ofs2.write(reinterpret_cast<char*>(&s),sizeof(s));
    }
    ifs2.close();
    ofs2.close();
    cout<<"Data Modified"<<endl;
}
void DeleteData(){
    student s;
    int r;
    cout<<"Give Roll no Of Student To Delete Data"<<endl;
    cin>>r;
    ifstream ifs("student.bin",ios_base::binary);
    ofstream ofs("temp.bin",ios_base::binary);
    while(ifs.read(reinterpret_cast<char*>(&s),sizeof(s))){
        if(s.rollno!=r){
            ofs.write(reinterpret_cast<char*>(&s),sizeof(s));
        }
    }
    ifs.close();
    ofs.close();
    ifstream ifs2("temp.bin",ios_base::binary);
    ofstream ofs2("student.bin",ios_base::binary);
    while(ifs2.read(reinterpret_cast<char*>(&s),sizeof(s))){
        ofs2.write(reinterpret_cast<char*>(&s),sizeof(s));
    }
    ifs2.close();
    ofs2.close();
    cout<<"Data Deleted"<<endl;
}
void DisplayHighest(){
    student s;
    int count=0;
    ifstream ifs("student.bin",ios_base::binary);
    while(ifs.read(reinterpret_cast<char*>(&s),sizeof(s))){
        count++;
    }
     ifs.close();
    student *s2=new student[count];
   
    ifstream ifs2("student.bin",ios_base::binary);
    int i=0;
    for(i=0;ifs2.read(reinterpret_cast<char*>(&s),sizeof(s));i++){
        s2[i]=s;
    }
    ifs2.close();
    int large=s2[0].marks;
    int loc=0;
    i=0;
    while(i<count){
        if(s2[i].marks>large){
            large=s2[i].marks;
            loc=i;
        }
        i++;
    }
    cout<<"Data Of Student Having Highest Marks is :: "<<endl;
    cout<<"Marks = "<<s2[loc].marks<<endl;
    cout<<"Name = "<<s2[loc].name<<endl;
    cout<<"Roll No = "<<s2[loc].rollno<<endl;
    delete []s2;
}
int main(){
    char ch;
    while(1){
        cout<<"1.Add Data"<<endl;
        cout<<"2.Display Data"<<endl;
        cout<<"3.Modify Data"<<endl;
        cout<<"4.Delete Data"<<endl;
        cout<<"5.Display Data Of Student Having Highest Marks"<<endl;
        cout<<"6.Exit"<<endl;
        ch=getche();
        cout<<endl;
        if(ch=='1'){
            AddData();
        }
        else if(ch=='2'){
            DisplayData();
        }
        else if(ch=='3'){
            ModifyData();
        }
        else if(ch=='4'){
            DeleteData();
        }
        else if(ch=='5'){
            DisplayHighest();
        }
        else if(ch=='6'){
            break;
        }
        else{
            cout<<"Invalid Choice"<<endl;
        }
        getch();
        system("cls");
    }
    return 0;
}
