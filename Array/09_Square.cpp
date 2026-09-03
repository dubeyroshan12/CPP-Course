//Given an integer n. Create an array containing squares of all natural numbers till n and print the elements of the array.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:- ";
    cin>>n;
    int arr[n];

    for(int i=0;i<=n;i++){
        cout<<i*i<<" ";
    }
}