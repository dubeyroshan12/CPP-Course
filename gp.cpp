//Geometric Progression

#include<iostream>
using namespace std;
int main(){
    //1,2,4,8,16,32.......
    int a;
    cin>>a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<a<<",";
        a=a*2;
    }
}