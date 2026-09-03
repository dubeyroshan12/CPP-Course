//WAP calculate the product of all the elements in the given array

#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,5,8,6,3};
    int pdts=1;
    for(int i=0;i<5;i++){
        pdts=pdts*arr[i];
    }
    cout<<pdts;
}