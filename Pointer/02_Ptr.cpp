//Pointers

#include<iostream>
using namespace std;
int main(){
    int x=3;
    int*p=&x;
    cout<<x<<endl;
    cout<<p<<"\n"<<&x<<endl;
    cout<<*p<<endl;       // [ * = Dereference/Star Operator ];
    cout<<&p<<endl; 
    *p=16;
    cout<<x<<endl;
}