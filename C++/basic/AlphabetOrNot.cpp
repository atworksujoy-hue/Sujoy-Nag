#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character - ";
    cin>>ch;
    cout<<(int)ch <<endl;
    int ascii = (int)ch;
    if(ascii>=97 && ascii<=122 || ascii>=65 && ascii<=90){
        cout<<"the character is an alphabet";
    }
    else{
        cout<<"the character is not an alphabet";
    }
}