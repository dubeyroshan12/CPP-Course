// Make a marksheet Grade according to Marks

//Absolute Value

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:-";
    cin>>n;
    if(n>=81 && n<=100){
        cout<<"Very Good";
    }
    // else if(n>=61 and n<=80){
    //     cout<<"Good";
    // }
    else if(n>=61){
        cout<<"Good";
    }
    //  else if(n>=41 and n<=60){
    //     cout<<"Average";
    // }
    else if(n>=41){
         cout<<"Average";
    }
    else{
        cout<<"Fail";
    }
}