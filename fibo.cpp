#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1,c;
    cout<<"";
    cin>>n;
    cout<<a<<"\n";
    cout<<b<<"\n";
    for(int i=2;i<n;i++){
        c=a+b;  // 0+1=1
        a=b;    // 1
        b=c;    // 1
        cout<<c<<"\n";
    }
}