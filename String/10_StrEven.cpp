//Input a String of even length and reverse the first half of the string.


#include<iostream>
// #include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="Roshan";
    cout<<str<<endl;
    // int n=str.length();
    // int i=0;
    // int j=n/2-1;
    // while(i<j){
    //     char temp =str[i];
    //     str[i]=str[j];
    //     str[j]=temp;
    //     i++;
    //     j--;
    // }
    //     cout<<str;


    reverse(str.begin(),str.begin()+3);
    cout<<str;


}