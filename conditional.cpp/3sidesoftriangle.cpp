// Check whether the given 3 number are the sides of triangle

#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter first side of triangle= ";
    cin>>x;
    cout<<"Enter second side of triangle= ";
    cin>>y;
    cout<<"Enter third side of triangle= ";
    cin>>z;
    if((x+y)>z && (y+z)>x && (x+z)>y){
        cout<<"Valid";
        
    }
    else{
        cout<<"Not Valid";
    }
}