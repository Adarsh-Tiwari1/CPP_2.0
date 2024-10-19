#include<iostream>
using namespace std;
int main(){  
    int a=6;
    int &b=a;
    cout<<a<<"\n";
    cout<<b<<"\n";
    cout<<&a<<"\n";
    cout<<&b<<"\n";
}