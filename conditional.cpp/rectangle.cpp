//Whether Area ar Perimeter is Bigger?


#include<iostream>
using namespace std;
int main(){
    int l,b,a,p;
    cout<<"Enter the length of rectangle = ";
    cin>>l;
     cout<<"Enter the breadth of rectangle = ";
    cin>>b;
    a=l*b;
    p=2*(l+b);
    cout<<"Area of rectangle is = "<<a<<endl;
    cout<<"Perimeter of rectangle is = "<<p<<endl;
    
    if(a>p){
        cout<<"Area of rectangle is greater than Perimeter";
    }
    else if(p>a){
        cout<<"Perimeter is greater than Area";
    }
    else{
        cout<<"Both are Equal.";
    }

}