//Indexing in String



#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string:- ";
    //cin>>str;   // It will not Print after gap;
    getline(cin,str);
    cout<<str[0]<<endl;
     cout<<str<<"\n";
     str[0]='L';
    cout<<str<<endl;
    cout<<str.length()<<" "<<str.size();

}