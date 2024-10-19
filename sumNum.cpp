// sum of two and three digit number.
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter 3 digit number";
    cin>>a; //534
    int b=a/100;  //5
    int c=a%100;  //34
    int d=c/10;  //3
    int e=c%10;  //4
    cout<<b+d+e; //12
}

/*

#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"enter 3 digit number";
    cin>>a; // 572
     b=a%100; // 72
    a=a/100; // 5
    c=b/10;  // 7
    d=b%10;  // 2
    cout<<a+c+d;   
}

*/

/*

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 3 number";
    cin>>a;
    b = a % 100;
    b = b/10;
    a = a/100;
    c=b-a;
    cout<<b+a+c;
}

*/
 
/*

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter three number";
    cin>>a;
    a=a/100+(a%100)/10+a%10;
    cout<<a;
}

*/

