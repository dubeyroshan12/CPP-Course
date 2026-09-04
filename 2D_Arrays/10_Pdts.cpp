//WAP for the product of two array.

#include<iostream>
using namespace std;
int main(){
    int arr[4][3]={{3,6,1},{5,4,2},{7,2,6},{1,8,5}};
    int brr[4][3]={{2,4,7},{1,6,8},{7,8,0},{3,2,5}};
    
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]*brr[i][j]<<" ";
        }
        cout<<endl;
    }
}