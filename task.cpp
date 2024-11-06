
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter number\n";
    cin>>ch;
    if(ch>=97 && ch<=121){
        cout<<char(ch-32);
    }
    else{
        cout<<"    ";
    }  
}

