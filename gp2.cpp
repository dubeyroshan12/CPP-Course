//Display the GP 3,12,48,192......

//Geometric Progression

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;
    int a;
    cin>>a;
    for(int i=0;i<n;i++){
        cout<<a<<",";
        a=a*4;
    }
}