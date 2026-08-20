//Divisibility of 3 and 5
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    if(n%3==0 && n%5==0){
        cout<<"Divisibility Pass";
    }
    else{
        cout<<"NotDivisible";
    }

}