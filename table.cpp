
#include<iostream>
using namespace std;
int main(){
    int a,b=1;
    cout<<"enter any number";
    cin>>a;
    table:    // this table is label 
    cout<<a*b<<"\n";
    b++;
    if(b<=10){
        goto table;
    }
    cout<<"\ndone";
}

// reverse table 
/*
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"";
    cout<<"";
    cin>>num; 
    for(int i=10;i>=1;i--){
        cout<<num<<"*"<<i<<"="<<num*i<<"\n";
    }
}
*/