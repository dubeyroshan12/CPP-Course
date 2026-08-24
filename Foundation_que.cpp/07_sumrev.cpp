//WAP to print the sum of given number and its reverse....

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number:- ";
    cin>>x;
    int rem;
   int rev=0;
   int a=x;
    while(x!=0){
      //int ld=(x%10);
        //sum=sum+ld;
        
         rem=(x%10);
        rev=rev*10+rem;
           // po=po+c;
        x=x/10;


    }
    cout<<rev<<"\n";
    cout<<"Sum of reverse is:- ";
    cout<<a+rev;
    //cout<<sum+po;
}
