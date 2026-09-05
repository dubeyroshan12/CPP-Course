//WAP to count the number of vowel

#include<iostream>
using namespace std;
int main(){
    int count=0;
    string str ="Cow is an animal with four legs";
    for(int i=0;i<str.length();i++){
        if(str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
            count+=1;
        }
    }
    cout<<count;
}