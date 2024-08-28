#include<iostream>
using namespace std;
#include<fstream>
int main(){
    ifstream ifs("a.txt");
    char str[100];
    while(1){
        ifs.getline(str,100);
        if(ifs.eof()){
            break;
        }
        cout<<str<<endl;
    }
    ifs.close();
    return 0;
}