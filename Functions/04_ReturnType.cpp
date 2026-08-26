//Return Type

#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
int main(){
    int x;
    cout<<"Enter 1st number:- ";
    cin>>x;
    int y;
    cout<<"Enter 2nd number:- ";
    cin>>y;
    cout<<sum(x,y)<<endl;
    cout<<sum(52,18); 
}
