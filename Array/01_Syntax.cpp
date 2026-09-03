//Basic Syntax of an Array......
#include<iostream>
using namespace std;
int main(){
    //5 integers -->5,4,6,2,7;

    int arr[5];     //decleration
    arr[0]=6;       //set  initialise
    arr[1]=9;  
    arr[2]=3;  
    arr[3]=1;  
    cout<<arr[0];   //  Print


    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    arr[1]=40;  //Updation
    
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
     
}