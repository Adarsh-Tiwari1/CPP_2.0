#include<iostream>
using namespace std;
int main(){
    int days,years,months,weeks;
    cout<<"enter days";
    cin>>days;
    years=years/365;  // 400 // 1
    months=(years%365)/30; // 
    weeks=((days%365)%30)/7;
    days=((days%365)%30)%7;
    cout<<years<<endl;
    cout<<months<<endl;
    cout<<weeks<<endl;
    cout<<days<<endl;    
}