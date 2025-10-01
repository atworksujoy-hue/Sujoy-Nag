#include<iostream>
using namespace std;
int main(){
    int passmarks , yournumber ; 
    cout<<"enter thr passmarks - ";
    cin>>passmarks;
    cout<<"enter the your number - ";
    cin>>yournumber;
    cout<<((yournumber>passmarks) ? "pass" : "fail");
}
