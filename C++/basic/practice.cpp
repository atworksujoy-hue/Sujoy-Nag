#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n - ";
    cin>>n;
    int a=0;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
       int b = a+1;
        a = a+b;
        

    }
}