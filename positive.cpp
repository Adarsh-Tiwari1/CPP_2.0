//wap to display always positive value...
/*
#include<iostream>
using namespace std;
int main(){
    int val,p;
    cout<<"enter number";
    cin>>val;
    //  cout<<(val<0)?-val:val;
    // cout<<val;
    p=(val<0)?-val:val;      // ternary operator ture and false ...
    cout<<p;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"";
    cin>>a;
    if(a>0){
        cout<<a;
    }
    else if(a<0){
       cout<<-a;
    }
}
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"";
    cin>>n;
    if(n<0){
        cout<<-n;
    }else if(n>0){
        cout<<n;
    }else if(n==0){
        cout<<n;
    }else{
        cout<<"thank you";
    }
}




