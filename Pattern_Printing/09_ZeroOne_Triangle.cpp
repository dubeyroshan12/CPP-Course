//WAP to print the Pattern of ZERO ONE Triangle

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the value of x:- ";
    cin>>x;
    int a=1;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<1<<" ";
            }
            else{
            cout<<0<<" ";
            
            }
        }
        cout<<endl;
    }
}