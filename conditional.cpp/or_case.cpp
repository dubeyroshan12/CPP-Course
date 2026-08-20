//OR Case Statement Number is divisible by 3 or(||) 5

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number = ";
    cin>>x;
    if(x%3==0 || x%5==0){
        cout<<"PASS";

    }
    else{
        cout<<"NOT PASS";
    }

}