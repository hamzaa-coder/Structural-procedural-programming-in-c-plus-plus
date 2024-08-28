#include<iostream>
using namespace std;
int high( int a,int b){
    if(a>b){
        cout<<"Highest is : "<<a<<endl;
    }
    else if(b>a){
        cout<<"Highest is : "<<b<<endl;
    }
    else{
        cout<<"Both Are Equal"<<endl;
    }
}
int main(){
    int x,y;
    cout<<"Give Two Nmbers"<<endl;
    cin>>x>>y;
    high(x,y);
    return 0;
}
