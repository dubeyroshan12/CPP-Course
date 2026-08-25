//WAP for numeric Pattern but only print odd numbers   1   13   135

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:- ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<2*i;j=j+2){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<2*j-1<<" ";
        }
        cout<<endl;
    }

      cout<<endl;


    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a+=2;
        }
        cout<<endl;
    }
}