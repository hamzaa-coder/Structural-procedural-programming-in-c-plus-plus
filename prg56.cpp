#include<iostream>
using namespace std;
int out(int x,int y){
    int z;
    z=(x*x)+(y*y);
    cout<<"Result = "<<z<<endl;
}
int main(){
    int a,b;
    cout<<"Give Two Numbers"<<endl;
    cin>>a>>b;
    out(a,b);
    return 0;
}