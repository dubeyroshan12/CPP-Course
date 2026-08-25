//WAP to print inverted pattern

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number:- ";
    cin>>x;
    int i,j;

//PRINT INVERTED STAR

    for(i=1;i<=x;i++){
        for(j=1;j<=x+1-i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }

//PRINT INVERTED NUMBER 1234

    cout<<endl;
     for(i=1;i<=x;i++){
        for(j=1;j<=x+1-i;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

//PRINT INVERTED ABCD

     cout<<endl;
     for(i=1;i<=x;i++){
        for(j=1;j<=x+1-i;j++){
            cout<<char(j+64)<<" ";
        }
        cout<<"\n";
    }

//PRINT INVERTED OUTERLOOP VALUE 1111 (LIKE THIS)

     cout<<endl;
     for(i=1;i<=x;i++){
        for(j=1;j<=x+1-i;j++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}