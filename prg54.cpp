#include<iostream>
using namespace std;
int sum(int a,int b) {
    int c;
    c=a+b;
    cout<<"Sum Of Given Numbers is = "<<c<<endl;

}
int main(){
    int a,b;
    cout<<"Give Two Numbers"<<endl;
    cin>>a>>b;
    sum(a,b);
    return 0;
}