//WAP to check if an array contains n elements, then check if the given array is palindrome or not
// Palindrome Number are like :- {1,2,3,3,2,1}     {1,2,3,4,4,3,2,1}

#include<iostream>
using namespace std;
int main(){
    int arr[8]={1,2,3,4,4,3,2,1};
    int n=sizeof(arr)/4;
    int i=0,j=n-1;
    bool flag=true;

    while(i<j){
        if(arr[i]!=arr[j]){
            cout<<"Not Pallindrome"<<"\n";
            return 0;
        }
        i++;
        j--;
    }
    cout<<"Pallindrome"<<"\n";


    // while(i<j){
    //     if(arr[i]==arr[j]){
    //         flag=true;
    //         i++;
    //         j--;
    //     }
    //     else{
    //         flag=false;
    //         i++;
    //         j--;
    //     }

    // }
    // if(flag==true){
    //     cout<<"Given Number is a Palindrome Number.";

    // }
    // else{
    //     cout<<"Not a Palindrome Number";
    // }
}
