//WAP to Print Star Triangle Vertically Flipped (same as 13 but with different logic)


#include<iostream>
using namespace std;
int main()
{   
    int n;
    cout<<"Enter the value of n:- ";
    cin>>n;

//Print Reverse Triangle

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"  ";
        }
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;  
    }

//Print Reverse Number
for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"  ";
        }
        for(int j=0;j<=i;j++){
            //int a=j+1;
            cout<<j+1<<" ";
            //a++;
        }
        cout<<endl;  
    }


}