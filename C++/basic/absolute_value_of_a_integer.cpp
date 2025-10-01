#include<iostream>
using namespace std;
int main(){
    cout<<("please enter your number - ");
    int n;
    cin>>n;
    if (n<0) {
        n = -n;
    }
    cout<<n;
}
