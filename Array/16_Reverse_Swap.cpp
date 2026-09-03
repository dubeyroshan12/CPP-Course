//WAP to reverse the array without using any extra array.

#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,5,6,4};
    int n=sizeof(arr)/4;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    // for(int i=0;i<5;i++){
    //     int j=5-i-1;
    //     cout<<arr[j]<<" ";
    // }
    int i=0;
    int j=n-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}