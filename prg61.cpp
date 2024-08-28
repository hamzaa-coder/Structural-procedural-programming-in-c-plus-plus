#include<iostream>
using namespace std;
void f1(int i,int n){
    if(i<=n){
        cout<<i<<endl;
        i++;
        f1(i,n);
    }
}
int main(){
    int n;
    cout<<"Give n"<<endl;
    cin>>n;
    f1(1,n);
    return 0;
}