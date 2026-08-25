//WAP for star pattern printing

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:- ";
    cin>>n;
//PRINT TRIANGULAR STAR

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* " ;
        }
        cout<<endl;
    }
//PRINT ALPHABET ABCD  A  AB  ABC

    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<char(j+65)<<" ";
        }
        cout<<endl;
    }

//PRINT NUMERIC VALUE   1  12  123

    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

//PRINT OUTER LOOP VALUE    1   22   333

    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
//PRINT NUMERIC TRIANGLE IN REVRSE ORDER LIKE 4  43   432 

     cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<n-j+1<<" ";
            
            
        }
        cout<<endl;
    }

}