#include<iostream>
using namespace std;
int main(){
    int n,c=0;
    cout<<"enter number";
    cin>>n;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==0){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
}