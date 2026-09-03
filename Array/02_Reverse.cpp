//WAP to initialise array 

#include<iostream>
using namespace std;
int main(){
    // int c[5]={1,5,7,8,3};      //Decleration and Initialising 
    // for(int i=4;i>=0;i--){
    //     cout<<c[i]<<" ";
    // }

    cout<<endl;
    int n;
    int arr[n]={2,8,6,0,1,2,4};
    cout<<"Enter the value of n :- ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}