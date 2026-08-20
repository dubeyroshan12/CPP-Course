//Greatest among 3 using nested if else

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
    if(x>y){
        if(x>z){
            cout<<"Greatest Number is X = "<<x;
        }
        else{
             cout<<"Greatest Number is Z = "<<z;
        }
    }
    else{  
        if(y>z){
             cout<<"Greatest Number is Y = "<<y;
        }
        else{
             cout<<"Greatest Number is Z = "<<z;
        }
    }
    // else{
    //      cout<<"Greatest Number is = "<<z;
    // }
}