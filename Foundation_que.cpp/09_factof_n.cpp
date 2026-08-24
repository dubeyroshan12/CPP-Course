//WAP to print the factorial of first "n" number
#include<iostream>
using namespace std;
int main(){
    int fact=1;
    int n;
    cout<<"Enter the value of n :- ";
    cin>>n;
    int product=1;
    if(n==0){
        cout<<n<<"!="<<1;
    }
    for(int i=1;i<=n;i++){
         product=product*i;
        cout<<i<<"!="<<product<<endl;
    } 
}