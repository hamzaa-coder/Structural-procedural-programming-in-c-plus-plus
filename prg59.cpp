#include<iostream>
using namespace std;
int high(int a,int b){
    if(a>b){
        return a;
    }
    else if(b>a){
        return b;
    }
    else {
        return a;
    }
}
int main(){
    int u,v,x,y,z;
    cout<<"Give Five Numbers"<<endl;
    cin>>u>>v>>x>>y>>z;
    int k=high(u,v);
    int l=high(x,y);
    int m=high(k,l);
    int n=high(m,z);
    cout<<"Highest is : "<<n<<endl;
    return 0;
}
