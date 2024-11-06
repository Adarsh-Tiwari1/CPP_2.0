/*
#include<iostream>
using namespace std;
int main(){
    int pass,otp;
    cout<<"enter your password\n";
    cin>>pass;
    if(pass==2){
        cout<<"you are otp";
        cin>>otp;
        if(otp==4){
            cout<<"you are welcome";
        }
        else{
            cout<<"you are fraud";
        }
    }
    else{
        cout<<"envalid  passwoed";
    }
}
*/

/*
#include<iostream>
using namespace std;
int main(){
   int pass,otp,money;
   cout<<"";
   cin>>pass;
   if(pass==1){
       cout<<"welcome";
   }else{
       cout<<"w pass";
   }
   cout<<"";
   cin>>otp;
   if(otp==2){
       cout<<"co";
   }else{
       cout<<"fr";
   }
   cout<<"";
   cin>>money;
   if(money==3){
       cout<<"t m";
   }else{
       cout<<"th";
   }   
}
*/

/*
#include<iostream>
using namespace std;
int main(){
    int pass,otp,amount;
    cout<<"";
    cin>>pass;
    if(pass==2){
        cout<<"enter otp";
        cin>>otp;
        if(otp==3){
            cout<<"enter your ammount";
            cin>>amount;
            if(amount==500){
                cout<<"thankyou";
            }else{
                cout<<"you deposit only 500";
            }
        }else{
            cout<<"you are fraud";
        }
    }else{
        cout<<"your password is wrong";
    }
}
*/

/*
#include<iostream>
using namespace std;
int main(){
    int pass,opt;
    cout<<"enter your password";
    cin>>pass;
    if(pass==20){
        cout<<"enter your otp";
        cin>>opt;
        if(opt==10){
            cout<<"you are welocme";
        }
        else{
            cout<<"you are fraud";
        }
    }
    else{
        cout<<"invalid password";
    }
}
*/

/*
#include<iostream>
using namespace std;
int main(){
    int pass,otp,money;
    cout<<"enter your password";
    cin>>pass;
    if(pass==7777){
        cout<<"enter your opt";
        cin>>otp;
        if(otp==8888){
            cout<<"enter your money";
            cin>>money;
            if(money==2000){
                cout<<"you are recived money";
            }
            else{
                cout<<"you are fraud";
            }
        }
       
    }
     cout<<"envalid passwoed";
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int pass,otp,money;
    cout<<"enter your password";
    cin>>pass;
    if(pass==1){
        cout<<"enter your otp";
        cin>>otp;
        if(otp==2){
            cout<<"you are welcome";
        }
        else{
            cout<<"you are fraud";
        }
    }
    else{
        cout<<"envalid password";
    }
 }
 */

/*
#include<iostream>
using namespace std;
int main(){
    int pass,otp,money;
    cout<<"enter your password";
    cin>>pass;
    if(pass==1){
        cout<<"enter your opt";
        cin>>otp;
        if(otp==2){
            cout<<"enter your money";
            cin>>money;
            if(money==3){
                cout<<"you recive money";
            }else{
                cout<<"thankyou";
            }
        }else{
            cout<<"you are fraude";
        }
    }else{
        cout<<"invalid password";
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int pass,otp;
    cout<<"enter password";
    cin>>pass;
    if(pass==10){
        cout<<"enter your opt";
        cin>>otp;
        if(otp==20){
            cout<<"welcome";
        }
        else {
            cout<<"wrong otp";
        }
       
    }else{
        cout<<"wrong password";
    }
}
*/

// card is blocked...
/*
#include<iostream>
using namespace std;
int main(){
    int pwd;
    int a=1;
    cout<<"enter your password";
    cin>>pwd;
    do{
        if(pwd==1024){
            cout<<"welcome";
            break;
        }
        cout<<"enter againg your password="<<a<<"\n";
        cin>>pwd;
        a++;
    }while(a<=5);
    if(a>5){
        cout<<"card is blocked";
    }  
}
*/


/*
#include<iostream>
using namespace std;
int main(){
    int pass,att=0;
    cout<<"enter password\n";
    cin>>pass;
    while(pass!=1024 && att<4){
        att++;
        cout<<"incorrect pass,try again"<<att<<" is 5\n";
        cin>>pass;
    }if(pass==1024){
        cout<<"welcome";
    }else{
        cout<<"card is blockeed";
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int age,att=0;
    cout<<"enter your age\n";
    cin>>age;
    while(age!=5 && att<4){
        att++;
        cout<<"age not match ,  try again letter\n";
        cin>>age;
    }if(age==5){
        cout<<"age matched\n";
        cout<<"thank you";
    }else{
        cout<<"not welcome";
    }
}
*/

