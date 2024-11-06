#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter number";
    cin>>a;
    if(a%5==0 && a%7==0){
        cout<<"divide by 5 and 7="<<a;
    }
    else{
        cout<<"not divide by 5 and 7";
    }
}