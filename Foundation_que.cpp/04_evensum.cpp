//WAP to print sum of all the eveb digits of all the even digits of a given number

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    int sum=0;
    while(x!=0){
        int ld=(x%10);
        if(ld%2==0){
            sum+=ld;
        }
        x=x/10;
    }
    cout<<"Sum of even digit is :- "<<sum;


}