//WAP to add two matrices.
#include<iostream>
using namespace std;
int main(){
    int arr[4][3];
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;

    int brr[4][3];
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>brr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    int crr[4][3];
    cout<<"Sum of the array is:- ";
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]+brr[i][j]<<" ";

        }
        cout<<endl;
    }
    cout<<endl;
}