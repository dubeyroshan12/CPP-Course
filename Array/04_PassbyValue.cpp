//Pass by Value

#include<iostream>
using namespace std;
void change(int x){
    x=9;
}
int main(){
    int x=4;
    cout<<x<<endl;
    change(x);   // Pass by value
    cout<<x<<endl;
}

