#include<iostream>
using namespace std;
int main(){
    int a=12;  // global
  {
    int a=90; 
    cout<<a;   // local
    cout<<"\n";
  }
  cout<<a;
}