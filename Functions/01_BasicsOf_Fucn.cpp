//WAP to How to use Function

#include<iostream>
using namespace std;
void greet(){
    cout<<"Good Morning";
    cout<<endl;
    return;   // It is not necessary to write Return here in Void
}
void food(){
    cout<<"I like Pasta";
    cout<<endl;
}
int main(){
    greet();
    cout<<"What do you like in Food?";
    cout<<endl;
   food();
   return 0;
}


