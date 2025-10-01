#include<iostream>
using namespace std;
int main(){
    int a , b , c ;
    cout<<"Enter your 1st number : ";
    cin>>a;
    cout<<"Enter your 2nd number : ";
    cin>>b;
    cout<<"Enter your 3rd number : ";
    cin>>c;

    if(a > b && a > c){
        cout<<a<<" is the largest";
    }
    else if(b > a && b > c){
        cout<<b<<" is the largest";
    }
    else{
        cout<<c<<" is the largest";
    }
}
