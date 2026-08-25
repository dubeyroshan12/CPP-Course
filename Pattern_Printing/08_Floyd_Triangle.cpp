//WAP to Print Floyd's Triangle

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the value of x:- ";
    cin>>x;
    int a=1;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}