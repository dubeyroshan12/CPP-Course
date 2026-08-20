//Highest Factor
#include<iostream>
using namespace std;
int main()
{
    int n;
    int x=1;
    cout<<"Enter the value of n= ";
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            x=i;
            
        }
        
    }
    cout<<x;
}