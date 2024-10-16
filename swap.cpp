// wap a program for swapping two value.

#include<iostream>
using namespace std;  
int main(){
    int a,b,t;
    cout<<"enter 2 value";
    cin>>a>>b;

  /*  a=a+b;
    b=a-b;
    a=a-b; */

     t=a;
     a=b;
     b=t;
 
    cout<<"a="<<a<<"\n";
    cout<<"b="<<b; 

}

// wap to swap to number without using arithmetic operater and third variable.

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"";
    cin>>a>>b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<"\n";
    cout<<b<<"\n";
}