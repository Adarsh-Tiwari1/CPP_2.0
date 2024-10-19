#include<iostream>
using namespace std;
int main(){
    
    /*
    
    float p,r,t;
    cout<<"enter p r and t";
    cin>>p>>r>>t;
    cout<<p*r*t/100;

    */

   float p,r,t,si;
   cout<<"enter principle\n";
   cin>>p;
   cout<<"enter rate of intrest\n";
   cin>>r;
   cout<<"enter time\n";
   cin>>t;
   si=p*r*t/100;
   cout<<"simple intrest"<<si<<"\n";
   cout<<"total ammount = "<<p+si;

    
}
