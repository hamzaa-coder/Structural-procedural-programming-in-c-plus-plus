#include<iostream>
using namespace std;
#include<fstream>
int main(){
    ofstream ofs("a.txt");
    int i;
    for(i=0;i<20;i++){
        ofs<<i+1<<" Line "<<endl;
    }
    ofs.close();
    cout<<"Data Written "<<endl;
    return 0;
}
