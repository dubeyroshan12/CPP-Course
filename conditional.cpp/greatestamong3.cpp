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
    if(x>y && x>z ){
        cout<<"Largest Number is="<<x;
        
    }
    else if(y>x && y>z){
        cout<<"Largest Number is = "<<y;
    }
    else{
        cout<<"Largest Number is = "<<z;
        
    }
}