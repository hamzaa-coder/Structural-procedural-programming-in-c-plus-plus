#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int x;
    cout<<"Give Number"<<endl;
    cin>>x;
    cout<<"Factorial is : "<<fact(x)<<endl;
    return 0;
}
