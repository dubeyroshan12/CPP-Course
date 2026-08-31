//Permutation nPr   n!/(n-r)!

#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int n;
    cout<<"Enter P:- ";
    cin>>n;
    int r;
    cout<<"Enter R:- ";
    cin>>r;
    int a=fact(n);
    int b=fact(n-r);
    cout<<a/b;
}