#include<iostream>
using namespace std;
int out(int x,int y,int z){
    cout<<"Result = "<<(x*x)+(y*y)+(z*z)<<endl;
}
int main(){
    int a,b,c;
    cout<<"Give Three Numbers"<<endl;
    cin>>a>>b>>c;
    out(a,b,c);
    return 0;
}