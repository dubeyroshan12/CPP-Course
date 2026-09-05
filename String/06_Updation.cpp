//Input a string and update all the even positions in the string to character 'a'. Consider 0-based indexing.

#include<iostream>
using namespace std;
int main(){
    string str="stop dreaming start doing";
    cout<<str<<endl;
    for(int i=0;i<str.size();i++){
        if(i%2==0 ){
            str[i]='a';
        }
    }
    cout<<str;
}