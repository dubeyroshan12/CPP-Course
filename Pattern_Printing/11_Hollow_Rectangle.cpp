//WAP to Print Hollow Rectangle

#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the value of x:- ";
    cin>>x;
    cout<<"Enter the value of y:- ";
    cin>>y;
    // int mid=(x/2)+1;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            if(i== 1|| i==x||j==1|| j==y){
                cout<<"* ";
            }
            else{
            cout<<"  ";
            
            }
        }
        cout<<endl;
    }
}