//Very Important 

#include<iostream>
using namespace std;
int main(){
    int x=3,y,z;
    y=x=10;           // HERE BOTH OPERATOR ARE SAME AND ARE ASSIGNMENT OP SO PERFORM OPERATION ON RIGHT TO LEFT

    z=x<10;    // ACTUALLY WHAT HAPPEN HERE 1st COMPARE AND GET FALSE & THE VALUE OF FALSE IS 0

    cout<<x<<" "<<y<<" "<<z;
}