#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number - ";
    cin>>n;
    if(n>=91){
        cout<<"Outstanding";
    }
    else if(n>=81){
        cout<<"Very Good";
    }
    else if(n>=71){
        cout<<"Good";
    }
    else if(n>=61){
        cout<<"Can do Better";
    }
    else if(n>=51){
        cout<<"Average";
    }
    else if(n>=41){
        cout<<"Below Average";
    }
    else{
        cout<<"Fail";
    }
}