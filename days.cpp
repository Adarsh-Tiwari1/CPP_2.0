
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number\n";
    cin>>num;  // 400
    int year=num/365; // 1
    int temp=num%365; //35
    int month=temp/30; //1
    int days=temp%30; // 5
    cout<<year<<endl;
    cout<<month<<endl;
    cout<<days<<endl;
}
