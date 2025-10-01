#include<iostream>
using namespace std;
int main(){
    int a , b, c;
    cout<<"enter 1st triangle side - ";
    cin>>a;
    cout<<"enter 2nd triangle side - ";
    cin>>b;
    cout<<"enter 3rd triangle side - ";
    cin>>c;
    if( (a+b>c) && (a+c>b) && (b+c>a) )
        cout<<a<<","<<b<<","<<c<<" are triangle sides";
    else
       cout<<"invalid triangle";
}