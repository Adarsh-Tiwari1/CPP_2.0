/*
#include<iostream>
using namespace std;
int main(){
    float meter;
    cout<<"enter meter reading";
    cin>>meter;
    if(meter<0){
        cout<<"invalid reading\n";
    }
    else if(meter>0 && meter<=200){
        cout<<"rs"<<meter*5;
    }
    else if(meter>=201 && meter<=500){
        cout<<"rs"<<meter*6;
    }
    else if(meter>=501 && meter<=1000){
        cout<<"rs"<<meter*8;
    }
    else if(meter>1001){
        cout<<"rs"<<meter*10;
    }
    else{
        cout<<"thank you";
    }
}
*/

#include<iostream>
using namespace std;
int main(){
    int meter;
    cout<<"enter reading\n";
    cin>>meter;
    if(meter<0){
        cout<<"invalid reading\n";
    }
    else if(meter>=1 && meter<=200){
        cout<<"rs="<<meter*5;
    }
    else if(meter>=201 && meter<=500){
        cout<<"re="<<meter*7;
    }
    else if(meter>=501 && meter<=700){
        cout<<"rs="<<meter*9;
    }
    else if(meter>=701){
        cout<<"re="<<meter*10;
    }
    else{
        cout<<"thany you";
    }
}
