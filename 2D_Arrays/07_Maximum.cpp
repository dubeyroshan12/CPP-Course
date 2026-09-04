//WAP to Print the Maximum

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int max=INT_MIN;
    int arr[4][3];
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;

    
    cout<<"Maximun of the array is:- ";
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }


        }
       
    }
    cout<<max;
}