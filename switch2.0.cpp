#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 2 no.\n";
    cin>>a>>b;
    cout<<"select 1 largest or 2 for swap\n";
    cin>>c;
    switch(c){
        case 1:
        if(a>b){
            cout<<"large no="<<a;
        }
        else{
            cout<<"large no="<<b;
        }
        break;
    
    case 2:{
        int tmp;
        tmp=a;
        a=b;
        b=tmp;
        cout<<"a="<<a<<"\t";
        cout<<"b="<<b<<"\t";
        break;
    }
    default:{
        cout<<"invalid choice";

    }
 }
}