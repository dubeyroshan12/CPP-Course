//WAP to count digits of a give number.

#include<iostream>
using namespace std;
int main(){
    //int count=0;
    // string n;
    // cout<<"Enter the number: ";
    // cin>>n;
    // for(int i=0;i<n.length();i++){
        
    //     count++;
        
    // }
    int count=0;
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    while(n!=0){
        n=n/10;
        count++;
    }

    cout<<"Total Digits are : "<<count;
}