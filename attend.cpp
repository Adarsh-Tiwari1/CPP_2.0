#include<iostream>
using namespace std;
int main(){
    int attend,total,leav;
    cout<<"enter total class";
    cin>>total;
    cout<<"enter attend class";
    cin>>leav;
    float attendPer=attend/total*100;
    if(attendPer>=75){
        cout<<"you sit exam";
    }else{
        cout<<"you are not sit in exam";
    }
}e