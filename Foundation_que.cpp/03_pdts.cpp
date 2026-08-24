//WAP to print product of digits of a given number....

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the value of m: ";
    cin>>m;
    int pdt=1;
    while(m!=0){
        int ld=(m%10);
        pdt = pdt*ld;
        m=m/10;
    }
    cout<<"Product of the number is:-"<<pdt;
}