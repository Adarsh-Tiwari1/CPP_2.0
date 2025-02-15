// wap to find out the given number is armstrong or not. 153 teeno ke aalag karke add ke baad sam number aani chaiya.

#include<iostream>
using namespace std;
int main(){
    int num,total;
    cout<<"";
    cin>>num;
    int a=num/100;
    int b=num%100;
    int c=b/10;
    int d=b%10;
    total=a*a*a+c*c*c+d*d*d;
    if(num>=1&&num<=99 || num>=1000&&num<=99999){
        cout<<"invalid number";   
    }
    if(total==num){
        cout<<"this is arm strong number="<<total;
    }else{
        cout<<"this is not arm strong number";
    }   
}


// palindrome number 121=121

/*
#include<iostream>
using namespace std;
int main(){
    int num,total;
    cout<<"enter number";
    cin>>num;
    int a=num/100;
    int b=num%100;
    int c=b/10;
    int d=b%10;
    total=(a)+(c*10)+(d*100);
    if(num==total){
        cout<<"this is palindrome number";
    }else{
        cout<<"not palindrome";
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter three number";
    cin>>n;
    if(n>=100 && n<=999){
        int a=n/100;
        int b=n%100;
        int c=b/10;
       int d=b%10;
      // int sum=(a*a*a)+(c*c*c)+(d*d*d);
        int sum=(a)+(c*10)+(d*100);    // palindrome
       if(sum==n){
        cout<<"arm";
       }
       else{
        cout<<"not";
       }

    }
}
*/
