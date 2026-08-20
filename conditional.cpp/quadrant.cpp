//Check whether the given point lies on which quadrant
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter first number = ";
    cin>>x;
    cout<<"Enter second number = ";
    cin>>y;
    if(x==0 && y==0){
        cout<<"Lies At ORIGIN";
    }
    else if(x>=0 and y>=0){
        cout<<"Lies in 1st Quadrant";
    }
    else if(x<=0 && y>=0){
         cout<<"Lies in 2nd Quadrant";
    }
    else if(x<=0 && y<=0){
         cout<<"Lies in 3rd Quadrant";
    }
    else{
        cout<<"Lies in 4th Quadrant";
    }

}