//Find nth term of an AP
/*1,3,5,7,9,11,........,n*/

/*an = a+(n-1)*d  [here d=2, a=1];
an = 1+2n-2
an = 2n-1;*/

#include<iostream>
using namespace std;
int main(){
    int n,d,a;
    cin>>a;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of d: ";
    cin>>d;             //4,7,10,13,16......
    for(int i=1;i<n;i++){
        cout<<a<<" ";
        a=a+3;
        
                             //an=3*n+1;
        
    }
}