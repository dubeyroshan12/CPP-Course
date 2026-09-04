//WAP to Find the minimum element in a given matrix.

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int min=INT_MAX;
    int arr[4][3];
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;

    
    cout<<"Minimun of the array is:- ";
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]<min)
            {
                min=arr[i][j];
            }


        }
       
    }
    cout<<min;
}