//WAP to Find the maximum value out of all the elements in the array

//WAP to calculate the sum of all the elements in the given array.

#include<iostream>
using namespace std;
int main(){
    int arr[]={2,5,8,6,3};
    int max=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        };
    }
    cout<<max<<"\n";
    cout<<sizeof(arr)/4;
}