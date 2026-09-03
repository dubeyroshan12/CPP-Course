//WAP to print the minimum of the array

#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]={2,5,6,8,7,4};
    int x = INT_MAX;
    for(int i=0;i<6;i++){
        if(arr[i]<x){
            x=arr[i];
        }
    }
    cout<<x;



}