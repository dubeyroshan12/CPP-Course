//WAP to print reverse of a given number

#include<iostream>
using namespace std;
int main(){
    int x;
    int y=0;
    cout<<"Enter the number:- ";
    cin>>x;
    while(x!=0){
        // int c=(x%10);
        //     cout<<c;
        //     x=x/10;
        int ld=(x%10);
        y=y*10+ld;
        x=x/10;
        }
        cout<<y;
    }
