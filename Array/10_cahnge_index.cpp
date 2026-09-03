//Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.

#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,6,4,2,3,7,9};
    for(int i=0;i<7;i++){
        if(i%2==0){
            cout<<arr[i]+10<<" ";
        }
        else{
            cout<<arr[i]*2<<" ";
        }
    }
}