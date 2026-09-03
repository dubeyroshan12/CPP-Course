//Count the number of elements in given array greater than a given number x

#include<iostream>
using namespace std;
int main(){
int arr[6]={1,4,3,5,6,8};
 int x=3;
 int count=0;
 for(int i=0;i<6;i++){
    if(arr[i]>x){
        count++;
    }
}
cout<<count;
}