//whose is younger among these three??

//Greatest among 3 using nested if else

//Find the greatest among the three number
#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter the age of Ram = ";
    cin>>x;
    cout<<"Enter the age of Shyam  = ";
    cin>>y;
    cout<<"Enter the age of Ajay = ";
    cin>>z;


    if(x<y){
        if(x<z){
            cout<<"Younger one is Ram = "<<x;
        }
        else{
             cout<<"Younger One is Ajay = "<<z;
        }
    }
    else{  
        if(y<z){
             cout<<"Younger one is Shyam = "<<y;
        }
        else{
             cout<<"Younger One is Ajay = "<<z;
        }
    }
    // else{
    //      cout<<"Greatest Number is = "<<z;
    // }
}