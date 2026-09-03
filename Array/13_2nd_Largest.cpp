//WAP to find the second largest element

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[8]={4,5,1,3,8,9,2,10};
    int mx=INT_MIN;
    int smx=INT_MIN;
    for(int i=0;i<8;i++){
        mx=max(mx,arr[i]);
        
    }
    cout<<mx<<endl;
  for(int i=0;i<8;i++){
    if(arr[i]!=mx){
        smx=max(smx,arr[i]);
        smx=arr[i];
    }
    }
    cout<<"Second Largest Number in the given array is:- "<<smx;
}