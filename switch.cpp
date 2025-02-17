/*
#include<iostream>
using namespace std;
int main(){
    int a,b;
    char symblo;
    cout<<"whah use symbol";
    cin>>symblo;
    cout<<"enter number\n";
    cin>>a>>b;
    switch(symblo){
        case '+':{
            cout<<a+b;
            break;
        }
        case '-':{
            cout<<a-b;
            break;
        }
        default:{
            cout<<"please enter valid cahracter";
        }
        case '*':{
            cout<<a*b;
            break;
        }
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"enter day";
    cin>>day;
    switch(day){
        case 1:{
            cout<<"monday";
            break;
        }
         case 2:{
            cout<<"tuesday";
            break;
        }
         case 3:{
            cout<<"wednesday";
            break;
        }
        case 4:{
            cout<<"thu";
            break;
        }
        case 5:{
            cout<<"fri";
            break;
        }
        default:{
            cout<<"valid";
        }
        
    }
}
*/

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter charater\n";
    cin>>ch;
    switch(ch){
        case 'a':
        case 'A':{
            cout<<"vowel";
            break;
        }
        case 'e':
        case 'E':{
            cout<<"vowel";
            break;
        }
        case 'i':
        case 'I':{
            cout<<"vowel";
            break;
        }
        case 'o':
        case 'O':{
            cout<<"vowel";
            break;
        }
        case 'u':
        case 'U':{
            cout<<"vowel";
            break;
        }
        default:{
            cout<<"consonant";
        }
    }
}

