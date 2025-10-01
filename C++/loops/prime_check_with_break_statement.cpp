// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number - ";
//     cin>>n;
//     if(n==1) cout<<"1 is neither prime nor composite";
//     for(int i=2;i<=n-1;i++){
//         if(n%i==0) cout<<n<<" is not a prime number";
//         else cout<<n<<" is a prime number";
//         break;
//     }
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number - ";
    cin>>n;
    bool flag = true; // true means prime
    for(int i=2 ; i<=n-1 ; i++){
        if(n%i==0){ // i is a factor of n
            flag = false; // false means composite
            break;
        }
    }
        if(n==1) cout<<"1 is neither prime nor composite";
        else if(flag==true) cout<<n<<" is prime";
        else cout<<n<<" is composite";
}