#include<iostream>
using namespace std;
int main(){
    char gender;
    cout<<"enter m f o\n";
    cin>>gender;
    if(gender=='m'){
        cout<<"you are male";
    }
    else if(gender=='f'){
        cout<<"you are female";
    }
    else if(gender=='o'){
        cout<<"you are other";
    }
    else{
        cout<<"please enter valid gender";
    }

}