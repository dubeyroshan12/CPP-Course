//Swap using Function

//Swap 2 numbers  

#include<iostream>
using namespace std;
void swap(int &x, int &y){
    int temp=x;
    x=y;
    y=temp;
   
}
int main(){
    int a=6;
    int b=8;
     cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
   


}