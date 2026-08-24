//WAP to find out the factorial of a given number

#include<iostream>
using namespace std;
int main(){
    int fact=1;
    int n;
    cout<<"Enter the value of n :- ";
    cin>>n;
    int a=n;
    int product=1;
    // while(n>0){
    //     fact=fact*n;
    //     n--;
    //}
    for(int i=1;i<=n;i++){
        product = product*i;
    }
    
    // cout<<"Factorial of "<<a<<"!="<<fact;
    cout<<"Factorial of "<<a<<"!="<<product;
}