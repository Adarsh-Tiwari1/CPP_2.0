#include<iostream>
using namespace std;
int main(){
    int a;
    a=9>1 && 2<7;
    a=9>1 && 20<7;
    a=7 && -9; // zero and non zero me comprission karta hai.
    a=6 && 0;
    a=-7 || 0;     // expression bolte hai,
    cout<<a;

    //cout<<!a;   // not operator me just ulta hota hai, aagar ture hai to false and false hai to true.aata hai.
}