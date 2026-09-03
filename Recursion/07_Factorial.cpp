//WAP to make a functuon which calculates the factorial of N using Recursion

#include<iostream>
using namespace std;
int fact(int n){
    if (n==0 || n==1) return 1;
    return n*fact(n-1);
}
int main(){
    int d;
    cout<<"Enter the Number:- ";
    cin>>d;
    cout<<"Factorial of the given number "<<d<<"! is :- "  <<fact(d);
}