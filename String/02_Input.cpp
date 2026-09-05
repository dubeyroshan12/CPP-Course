//WAP to take input and print output

#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string:- ";
    //cin>>str;   // It will not Print after gap;
    getline(cin,str);
    cout<<str;
}