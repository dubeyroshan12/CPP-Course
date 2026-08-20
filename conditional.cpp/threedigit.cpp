//Check Whether the given number is 3 digit ar not?

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    if(n>99 && n<1000){
        cout<<"Three Digit Number";
    }
    
    else{
        cout<<"No";
    }
}