//Transpose of a Matrix;

#include<iostream>
using namespace std;
int main(){
    int arr[2][3];
    arr[0][0]=5;
    arr[0][1]=8;
    arr[0][2]=7;
    arr[1][0]=2;
    arr[1][1]=1;
    arr[1][2]=0;

    for(int i=0;i<2;i++){     //Row
        for(int j=0;j<3;j++){  //Column
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;

    for(int j=0;j<3;j++){     //Row
        for(int i=0;i<2;i++){  //Column
            cout<<arr[i][j]<<" ";
        }
    }
    

    


}