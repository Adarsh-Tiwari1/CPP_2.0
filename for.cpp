
// count number of digit.
/*
#include<iostream>
using namespace std;
int main(){
    int n,c=0;
    cout<<"";
    cin>>n;
    while(n!=0){
        c++;
        n=n/10;
    }
    cout<<"total digit="<<c;
}
*/


// wap to sum first number and last number.
/*
#include<iostream>
using namespace std;
int main(){
    int n,first,last;
    //  cout<<__INT_MAX__; // int ka max number pta karne ke liye.
    cout<<"";
    cin>>n;
    last=n%10;
    while(n!=0){
       first=n;
       n=n/10;  
    }
    cout<<"sum="<<first+last;
}
*/
// wap to find the factor of any number
/*
#include<iostream>
using namespace std;
int main(){
    int n;   
    cout<<"";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<"\t";
        }        
    }    
}
*/

//  wap to reverse the digit
/*
#include<iostream>
using namespace std;
int main(){
    int n;   
    cout<<"";
    cin>>n;
    while(n!=0){
        int a=n%10;
        n=n/10;
        cout<<a;
    }    
}
*/

//  wap to reverse the digit
/*
#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=0;
    cout<<"";
    cin>>n;
    while(n!=0){
        b=n%10;
        a=a*10+b;
        n=n/10;
    }
    cout<<a;
}
*/
// reverse number in cpp
/*
#include<iostream>
using namespace std;
int main(){
    int n,s=0,r=0;   
    cout<<"";
    cin>>n;
    while(n!=0){
        r=n%10;
         s=s*10+r;
       // s=s+r;  //  sum of digit...
        n=n/10;
    }
    cout<<s;   
}
*/

// find the lcm of two number..
/*
#include<iostream>
using namespace std;
int main(){
    int n1,n2,mx;   
    cout<<"enter first number";
    cin>>n1;
    cout<<"enter second number";
    cin>>n2;
    mx=n1>n2?n1:n2;
    while(true){
        if(mx%n1==0 && mx%n2==0){
            cout<<mx;
            break;
        }
        mx++;
    }      
}
*/
// find the hcf of two number
/*
#include<iostream>
using namespace std;
int main(){
    int n1,n2,mn;
    cout<<"enter first number";
    cin>>n1;
    cout<<"enter second numer";
    cin>>n2;
    mn=n1<n2?n1:n2;
    while(true){
        if(n1%mn==0 && n2%mn==0){
            cout<<"hcf="<<mn;
            break;
        }
        mn--;
    }
}
*/







