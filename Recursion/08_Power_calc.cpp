//WAP to Make a function which calculates 'a' raised to the power 'b' using recursion.
#include<iostream>
using namespace std;
int pow(int a, int b){
    if(b==0) return 1;
    return a*pow(a,b-1);

}
int main(){
    int x,y;
    cout<<"Enter the value of x:- ";
    cin>>x;
    cout<<"Enter the value of y:- ";
    cin>>y;
    cout<<pow(x,y);
    
}