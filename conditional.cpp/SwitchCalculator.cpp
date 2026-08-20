//Calculator Using Switch Cases

//Basic Calculator using if

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter 1st number :- ";
    cin>>x;
    char op;
    cin>>op;
    int y;
    cout<<"Enter 2nd number :- ";
    cin>>y;
    
    switch(op){
        case '+':
            cout<<x+y;
            break;
        case '-':
            cout<<x-y;
            break;
        case '*':
            cout<<x*y;
            break;
        case '/':
            cout<<x/y;
            break;
        default:
            cout<<"Invalid";
    }

}