//WAP to print sum from 1 to N (Return Type)

#include<iostream>
using namespace std;
int sum(int n){
    if(n==1) return 1;
    return n+sum(n-1);
}
    int main(){
        int x;
        cout<<"Enter the value:- ";
        cin>>x;
        cout<<sum(x);
    }