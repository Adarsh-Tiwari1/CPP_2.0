#include<iostream>
using namespace std;
int main(){
  int a=1;
  char b='c';
  cout<<&a<<"\n";          // int valude
  cout<<sizeof(a)<<"\n";    
  cout<<(void*)&b<<"\n";   // string value
  cout<<sizeof(b);
}