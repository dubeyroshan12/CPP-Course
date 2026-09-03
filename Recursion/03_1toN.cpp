//WAP to print number from 1 to 100

#include<iostream>
using namespace std;
void print(int m, int y){
    if(m>y){                 
    return;
    }
    cout<<m<<endl;
    print(m+1,y);

}
int main(){
    int y;
    cin>>y;
    print(1,y);
}