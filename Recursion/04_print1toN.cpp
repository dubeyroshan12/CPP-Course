//WAP to print 1 to N without using extra variable



#include<iostream>
using namespace std;
void print(int n){
    if(n==0){     //Base Case
    return;
    }

    else{
          print(n-1);  //Call
        cout<<n<<endl; //Work
   
    }
}
int main(){
    int x;
    cout<<"Enter the value of x:- ";
    cin>>x;
    print(x);
}