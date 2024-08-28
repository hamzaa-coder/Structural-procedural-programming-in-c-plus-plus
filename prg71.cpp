#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
struct product{
    int pid;
    char name[30];
    int qty;
};
void AddData(){
    product p;
    ofstream ofs("product.bin",ios_base::app | ios_base::binary);
    cout<<"Give Data"<<endl;
    cin>>p.pid>>p.name>>p.qty;
    ofs.write(reinterpret_cast<char*>(&p),sizeof(p));
    ofs.close();
    cout<<"Data Written"<<endl;
}
void DisplayData(){
    product p;
    ifstream ifs("product.bin",ios_base::binary);
    while(ifs.read(reinterpret_cast<char*>(&p),sizeof(p))){
        cout<<"Product I'D : "<<p.pid<<endl;
        cout<<"Product Name : "<<p.name<<endl;
        cout<<"Product Quantity : "<<p.qty<<endl;
    }
    ifs.close();
}
void ModifyData(){
    product p;
    int pi;
    cout<<"Give Product I'D You want to Modify "<<endl;
    cin>>pi;
    ofstream ofs("temp2.bin",ios_base::binary);
    ifstream ifs("product.bin",ios_base::binary);
    while(ifs.read(reinterpret_cast<char*>(&p),sizeof(p))){
        if(p.pid==pi){
            cout<<"Give New Data"<<endl;
            cin>>p.pid>>p.name>>p.qty;
        }
        ofs.write(reinterpret_cast<char*>(&p),sizeof(p));
    }
        ofs.close();
        ifs.close();
        ofstream ofs2("product.bin",ios_base::binary);
        ifstream ifs2("temp2.bin",ios_base::binary);
        while(ifs2.read(reinterpret_cast<char*>(&p),sizeof(p))){
            ofs2.write(reinterpret_cast<char*>(&p),sizeof(p));
        }
        ofs2.close();
        ifs2.close();
        cout<<"Data ModifieD"<<endl;
}
void DeleteData(){
    product p;
    int pi;
    ifstream ifs("product.bin",ios_base::binary);
    ofstream ofs("temp2.bin",ios_base::binary);
    while(ifs.read(reinterpret_cast<char*>(&p),sizeof(p))){
        if(p.pid!=pi){
            ofs.write(reinterpret_cast<char*>(&p),(sizeof(p)));
        }
    }
    ifs.close();
    ofs.close();

    ifstream ifs2("temp2.bin",ios_base::binary);
    ofstream ofs2("product.bin",ios_base::binary);
    while(ifs2.read(reinterpret_cast<char*>(&p),sizeof(p))){
        ofs2.write(reinterpret_cast<char*>(&p),sizeof(p));
    }
    ofs2.close();
    ifs2.close();
    cout<<"Data Deleted"<<endl;
}
void DisplayHighest(){
    product p;
    int count;
    ifstream ifs("product.bin",ios_base::binary);
    while(ifs.read(reinterpret_cast<char*>(&p),sizeof(p))){
        count++;
    }
    product p2[count];
    ifs.close();
    ifstream ifs2("product.bin",ios_base::binary);
    int i=0;
    while(ifs2.read(reinterpret_cast<char*>(&p),sizeof(p))){
        p2[i]=p;
    }
    ifs2.close();
    int large=p2[0].qty;
    int loc=0;
    i=0;
    while(i<count){
        if(p2[i].qty>large){
            large=p2[i].qty;
            loc=i;
        }
    }
    cout<<"Data Of Product Having Highest Quantity is ::"<<endl;
    cout<<"Product PID = "<<p2[loc].pid<<endl;
    cout<<"Product Name = "<<p2[loc].name<<endl;
    cout<<"Product Quantity = "<<p2[loc].qty<<endl;

}
int main(){
    char ch;
    while(1){
       cout<<"1.Add Data"<<endl;
        cout<<"2.Display Data"<<endl;
        cout<<"3.Modify Data"<<endl;
        cout<<"4.Delete Data"<<endl;
        cout<<"5.Display Data Of Product Having Highest Quantity"<<endl;
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
