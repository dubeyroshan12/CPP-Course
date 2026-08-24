//WAP to print the sum of given number and its reverse....

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number:- ";
    cin>>x;
    int sum=0;
    int po=0;
    while(x!=0){
      int ld=(x%10);
        sum=sum+ld;
        
        int c=(x%10);
            cout<<c;
            po=po+c;
        x=x/10;


    }
    cout<<endl;
    cout<<sum<<endl<<po<<endl;
    cout<<sum+po;
}
