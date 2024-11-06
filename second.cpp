#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number\n";
    cin>>num;
    int hour=num/3600;
    int temp=num%3600;
    int minut=temp/60;
    int sec=temp%60;
    cout<<hour<<endl;
    cout<<minut<<endl;
    cout<<sec<<endl;

    }