//WAP to calculate the sum of all the elements in the given array.

#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,5,8,6,3};
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}