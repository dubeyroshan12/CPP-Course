//Swaping two number using Pointers

#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp= *a;
     *a= *b;
     *b=temp;
}
int main(){
    int x,y;
    cout<<"Enter the vlaue of x:- ";
    cin>>x;
    cout<<"Enter the vlaue of y:- ";
    cin>>y;
    swap(&x, &y);
    cout<<x<<" "<<y;
}
//11:28 AM
