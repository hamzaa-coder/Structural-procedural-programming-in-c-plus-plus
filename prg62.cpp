#include<iostream>
using namespace std;
void f1(int i,int n){
    if(i<=20){
        cout<<"i = "<<i<<endl;
        i+=2;
        f1(i,20);
    }
}
int main(){
    f1(2,20);
    return 0;
}