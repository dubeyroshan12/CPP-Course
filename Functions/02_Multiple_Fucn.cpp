//WAP for the multiple funcions and call function inside other functon apart from Main 


#include<iostream>
using namespace std;
void greet(){
    cout<<"Good Morning";
    cout<<endl;
    return;   // It is not necessary to write Return here in Void
}
void ch(){
    cout<<"I like Pestry in Desert"<<endl;
}
void food(){
    cout<<"I like Pasta";
    cout<<endl;
    ch();
}
int main(){
    greet();
    cout<<"What do you like in Food?";
    cout<<endl;
   food();

   return 0;
  
}


