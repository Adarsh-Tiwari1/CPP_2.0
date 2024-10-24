
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter number";
    cin>>ch;
    if(ch>=97 && ch<=122){
        cout<<char(ch-32)<<"="<<int(ch);
    }
    else{
        cout<<char(ch+32)<<"="<<int(ch);
    }
}

/*
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter number";
    cin>>ch;
    if(ch>=97 && ch<=121){
        cout<<char(ch-32)<<"="<<int(ch);
    }    
}
*/

