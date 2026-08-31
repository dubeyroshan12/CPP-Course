//Recursion:- It means calling a function repeatdely...
//Writing a Program to demonstrate the code of a recursion
//Recursion is used to replace the for loop & to solve the bigger pblm into small base case
//It resembles infinite loop


#include<iostream>
using namespace std;
void greet(){
    cout<<"Hii Mr. R.K Dubey";
    cout<<endl;
    greet();            //Function calling itself called as recursion
                        //This call take it to the infinite loop .
}
int main(){
    greet();
}