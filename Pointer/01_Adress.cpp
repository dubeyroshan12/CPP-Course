//Address of a variable

#include<iostream>
using namespace std;
int main(){
    int x=3,y=9;
    cout<<x<<" "<<y<<endl;
    cout<<&x<<" "<<&y;  //0x61ff0c      [& --> Used for Address]
}                      //0x61ff08