//WAP to print sum of digit of a given number

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int j=0;
    int x=0;
    while(n!=0){

    x=(n%10);
    n=n/10;
    j=j+x;
    }
    cout<<"Sum is:- "<<j;
}