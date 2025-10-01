#include<iostream>
using namespace std;
int main(){
    int p , r , t , si;
    cout<<"please enter your principle - ";
    cin>>p;
    cout<<"please enter your rate of interest - ";
    cin>>r;
    cout<<"please enter your time - ";
    cin>>t;
    si = (p*r*t)/100;
    cout<<"your simple interest is - " << si;
}