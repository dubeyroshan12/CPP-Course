//WAP to Find the even from the 2D Array

#include<iostream>
using namespace std;
int main(){
    int arr[2][2]={{1,7},{2,3}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(arr[i][j]%2==0){
                cout<<"Even Number at index:- "<<i;
            }
        }
    }
}