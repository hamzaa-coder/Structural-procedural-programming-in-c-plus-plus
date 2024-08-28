#include<iostream>
using namespace std;
void f1(int i,int n){
    if(i>=1){
        cout<<"i = "<<i<<endl;
        i--;
        f1(i,1);
    }
}
int main(){
    f1(99,1);
    return 0;
}