#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 3 number\n";
    cin>>a>>b>>c;
    if(a>=b&&a>=c){
        cout<<a<<"is greater";
    }
    else if(a<=b&&c<=b){
        cout<<b<<"is greater";
    }
    else{
        cout<<c<<" is greater";
    }
}