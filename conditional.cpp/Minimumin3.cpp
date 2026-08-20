//Minimum among three number

//Find the greatest among the three number
#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter first number = ";
    cin>>x;
    cout<<"Enter second number = ";
    cin>>y;
    cout<<"Enter third number = ";
    cin>>z;
    if(x<y && x<z ){
        cout<<"Smallest Number is="<<x;
        
    }
    else if(y<x && y<z){
        cout<<"Smallest Number is = "<<y;
    }
    else{
        cout<<"Smallest Number is = "<<z;
        
    }
}