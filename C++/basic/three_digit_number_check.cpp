#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number - ";
    cin>>n;
    if(n>=100 && n<=999){
        cout<<"your number is a three digit number";
    }
    else{
        cout<<"your number is not a three digit number";
    }
}