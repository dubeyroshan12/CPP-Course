//Cocept of Parameters

#include<iostream>
using namespace std;
 
   //            ________> (Formal Parameter)
    //          |  
void sum(int a,int b)
{
    cout<<a+b;
   
}

int main(){

   //           ________> (Actual Parameters)
   //          |                                 (Pass by value)
        sum(7,8);
   return 0;
}


