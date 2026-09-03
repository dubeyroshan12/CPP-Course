//WAP to copy the contents of one array into another in the reverse order


#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,5,4,7,8};
    int n=sizeof(arr)/4;
   int brr[5];
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    for(int i=0;i<5;i++){
        int j=n-1-i;
        brr[i]=arr[j];
    }
    for(int i=0;i<n;i++){
        {
            cout<<brr[i]<<" ";
        }
    }

}