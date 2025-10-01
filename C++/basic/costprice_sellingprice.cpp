#include<iostream>
using namespace std;
int main(){
    float cp , sp ;
    cout<<"Enter Your cp - ";
    cin>>cp;
    cout<<"Enter your sp - ";
    cin>>sp;
    if(cp>sp){
        cout<<"Your loss is - "<<cp-sp;
    }
    if(cp==sp){
       cout<<"NO PROFIT AND NO LOSS";
    }
    if(cp<sp){
        cout<<"Your profit is - "<<sp-cp;
    }
}