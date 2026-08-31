//Swap 2 numbers  

#include<iostream>
using namespace std;
int main(){

//Using 3rd Variable
    int a=8;
    int b=6;
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
    
//Without-Using 3rd Variable

    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b;
}