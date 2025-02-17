/*
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int s=4;s>i;s--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int s=4;s>i;s--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<"\n";
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int s=4;s>i;s--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<char(j+64);
        }
        cout<<"\n";
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    for(int r=1;r<=5;r++){
        for(int s=4;s>=r;s--){
            cout<<" ";
        }
        for(int c=1;c<=r;c++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
*/
// // floyd triangle ... (first side se jo print karta hia)
 /*
#include<iostream>
using namespace std;
int main(){
    int n=1;
    for(int r=1;r<=4;r++){
        for(int s=4;s>r;s--){
            cout<<" ";
        }
        for(int c=1;c<=r;c++){
            cout<<n; 
            n++;           
        }
        cout<<"\n";
    }
}
*/

// full pyramid................
/*
#include<iostream>
using namespace std;
int main(){   
    for(int i=1;i<=4;i++){
        for(int s=4;s>i;s--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
*/
// invarted pyramid..
/*
#include<iostream>
using namespace std;
int main(){   
    for(int r=1;r<=4;r++){
        for(int s=1;s<r;s++){
            cout<<" ";
        }
        for(int c=4;c>=r;c--){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n=10;
    for(int r=1;r<=5;r++){
        for(int c=5;c>r;c--){
            cout<<n;
            n--;
        }
        cout<<"\n";
    }
}
*/
// pascal triangle (imp). *************
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"";
    cin>>n;
    for(int i=0;i<n;++i){
        int num=1;
        for(int j=0;j<n-i;++j){
            cout<<" ";
        }
        for(int k=0;k<=i;++k){
            cout<<num<<" ";
            num=num*(i-k)/(k+1);
        }
        cout<<"\n";
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }cout<<"\n";
    }
}
*/
