//WAP to print Alphabet pattern printing
#include<iostream>
using namespace std;
int main()
{   
    int n;
    cout<<"Enter the Number:- ";
    cin>>n;

//Print Alphabet Rectangle   ABCDE (In this way)

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<char(j+64)<<" ";
        }
        cout<<endl;  
    }
    cout<<endl; 
//Print Alphabet Rectangle   AAAA  BBBB (In this way)
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<char(i+64)<<" ";
        }
        cout<<endl;  
    }
     cout<<endl; 
     
//Print small Alphabets

     int k;
     cout<<"Enter the vlue:-";
     cin>>k;

    for(int i=1;i<=k;i++){
        for(int j=1;j<=k;j++){
            cout<<char(j+96)<<" ";
        }
        cout<<endl;  
    }
}