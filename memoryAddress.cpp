#include<iostream>
using namespace std;
int main(){
    int a,b;
    char t='a';
    cout<<"address of a = ";
    cout<<&a<<endl;
    cout<<"address of b = ";   
    cout<<&b<<endl;
    cout<<"address of t = ";
    cout<<(void *)&t;
}
