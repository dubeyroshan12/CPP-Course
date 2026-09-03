//Find the difference between the sum of elements at even indices to the sum of elements at odd indices.

#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,3,7,8,9,0,1};
    int x=0,y=0;
    for(int i=0;i<8;i++){
        if(i%2==0){
            x+=arr[i];
        }
        else{
            y+=arr[i];
        }
    }
    cout<<"Sum of the even indices are:- "<<x<<endl;
    
    cout<<"Sum of the odd indices are:- "<<y<<endl;

    cout<<"Difference is :- "<<x-y;
}