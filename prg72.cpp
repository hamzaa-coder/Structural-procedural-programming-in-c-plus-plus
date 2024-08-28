#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
struct vehicle{
    double vid;
    char model[30];
    int price;
};
void AddData(){
    vehicle v;
    ofstream ofs("vehicle.bin",ios_base::app | ios_base::binary);
    cout<<"Give Vehicle I'D "<<endl;
    cin>>v.vid;
    cout<<"Give Vehicle Model "<<endl;
    cin>>v.model;
    cout<<"Give Vehicle Price"<<endl;
    cin>>v.price;
    ofs.write(reinterpret_cast<char*>(&v),sizeof(v));
    ofs.close();
    cout<<"Data Written "<<endl;
}
void DisplayData(){
    vehicle v;
    ifstream ifs("vehicle.bin",ios_base::binary);
    while(ifs.read(reinterpret_cast<char*>(&v),sizeof(v))){
        cout<<"Vehicle I'D : "<<v.vid<<endl;
        cout<<"Vehicle Model : "<<v.model<<endl;
        cout<<"Vehicle Price : "<<v.price<<endl;
        cout<<"***************"<<endl;
    }
    ifs.close();
}
void ModifyData(){
    vehicle v;
    int pi;
    cout<<"Give Vehicle I'D of Vehicle You Want To Modify"<<endl;
    cin>>pi;
    ofstream ofs("temp.bin",ios_base::binary);
    ifstream ifs("vehicle.bin",ios_base::binary);
    while(ifs.read(reinterpret_cast<char*>(&v),sizeof(v))){
        if(v.vid==pi){
            cout<<"***Enter New Data***"<<endl;
            cout<<"Give Vehicle I'D : "<<endl;
            cin>>v.vid;
            cout<<"Give Vehicle Model : "<<endl;
            cin>>v.model;
            cout<<"Give Vehicle Price : "<<endl;
            cin>>v.price;
        }
        ofs.write(reinterpret_cast<char*>(&v),sizeof(v));
    }
    ofs.close();
    ifs.close();
    ifstream ifs2("temp.bin",ios_base::binary);
    ofstream ofs2("vehicle.bin",ios_base::binary);
    while(ifs2.read(reinterpret_cast<char*>(&v),sizeof(v))){
        ofs2.write(reinterpret_cast<char*>(&v),sizeof(v));
    }
    ofs2.close();
    ifs2.close();
    cout<<"Data Modified"<<endl;
}
void DeleteData(){
    vehicle v;
    int pi;
    cout<<"Give Pid Of Vehicle You Want To Delete "<<endl;
    cin>>pi;
    ofstream ofs("temp.bin",ios_base::binary);
    ifstream ifs("vehicle.bin",ios_base::binary);
    while(ifs.read(reinterpret_cast<char*>(&v),sizeof(v))){
        if(v.price<=pi){
            ofs.write(reinterpret_cast<char*>(&v),sizeof(v));
        }
    }
    ofs.close();
    ifs.close();
    ifstream ifs2("temp.bin",ios_base::binary);
    ofstream ofs2("vehicle.bin",ios_base::binary);
    while(ifs2.read(reinterpret_cast<char*>(&v),sizeof(v))){
        ofs2.write(reinterpret_cast<char*>(&v),sizeof(v));
    }
    ofs2.close();
    ifs2.close();
    cout<<"Data Deleted"<<endl;
}
void DisplayHighest(){
    vehicle v;
    int count=0;
    ifstream ifs("vehicle.bin",ios_base::binary);
    while(ifs.read(reinterpret_cast<char*>(&v),sizeof(v))){
        count++;
    }
    ifs.close();
    vehicle *v2=new vehicle[count];
    ifstream ifs2("vehicle.bin",ios_base::binary);
    int i=0;
    while(ifs2.read(reinterpret_cast<char*>(&v),sizeof(v))){
        v2[i]=v;
        i++;
    }
    ifs2.close();
    /*
    for(i=0;i<count;i++) {
        cout<<v2[i].vid<<endl;
        cout<<v2[i].model<<endl;
        cout<<v2[i].price<<endl;
    }*/

    int large=v2[0].price;
    int loc=0;
    for(i=1;i<count;i++){
        if(v2[i].price>large){
            large=v2[i].price;
            loc=i;
        }
    }
    cout<<"Data Of Vehicle Having Highest Price Is :: "<<endl;
    cout<<"Vehicle I'D : "<<v2[loc].vid<<endl;
    cout<<"Vehicle Model : "<<v2[loc].model<<endl;
    cout<<"Vehicle Price : "<<v2[loc].price<<endl;
    delete[] v2;
}
int main(){
    char ch;
    while(1){
        cout<<"1.Add Data"<<endl;
        cout<<"2.Display Data"<<endl;
        cout<<"3.Modify Data"<<endl;
        cout<<"4.Delete Data"<<endl;
        cout<<"5.Display Data Of Vehicle Having Highest Price"<<endl;
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
