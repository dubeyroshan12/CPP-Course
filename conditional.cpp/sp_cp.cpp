// Profit && Loss

#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the value of Cost Price = ";
    cin>>x;
    cout<<"Enter the value of Selling Price = ";
    cin>>y;
    if(x<y){
        cout<<"Made Profit"<<endl;
        cout<<"Profit Amount is = "<<y-x;
        
    }
    
    else if(y<x){
        cout<<"Made Loss"<<"\n";
        cout<<"Loss Amount Is = "<<x-y;
    }
    else{
        cout<<"Neither Profit Nor Loss";
    }

}