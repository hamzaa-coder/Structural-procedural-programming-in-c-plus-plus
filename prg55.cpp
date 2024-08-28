#include<iostream>
using namespace std;
int sum(int a,int b){
    cout<<"Sum Of Given Numbers is = "<<a+b<<endl;
}
int prod(int a,int b){
    cout<<"Product of Given Numbers is = "<<a*b<<endl;
}
int sub(int a,int b){
    cout<<"Difference Of Given Numbers is = "<<a-b<<endl;
}
int divi(int a,int b){
    cout<<"Division Of Given Numbers is = "<<a/b<<endl;
}
int main(){
    int x,y;
    cout<<"Give Two Numbers "<<endl;
    cin>>x>>y;
    sum(x,y);
    prod(x,y);
    sub(x,y);
    divi(x,y);
    return 0;
    }