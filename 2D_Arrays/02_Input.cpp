//Take input in 2D Array

#include<iostream>
using namespace std;
int main(){
    int arr[2][3];
    

    for(int i=0;i<2;i++){     //Row
        for(int j=0;j<3;j++){  //Column
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<2;i++){     //Row
        for(int j=0;j<3;j++){  //Column
            cout<<arr[i][j]<<" ";
        }
    }
    

    


}