//WAP for Power Function(Logarithmic)
//a^4=a^4/2*a^4/2;
//a^5=a^5/2*a^5/2*a;


 #include<iostream>
 using namespace std;
 int pow(int a, int b){
    if (b==0){
        return 1;
    }
    else if(b%2!=0){
        return a*pow(a,b/2)*pow(a,b/2);
    }
    else{
        return pow(a,b/2)*pow(a,b/2);
    }

}
    int main(){
        int x,y;
        cout<<"Enter the value of x :- ";
        cin>>x;
        cout<<"Enter the value of y :- ";
        cin>>y;
        cout<<pow(x,y);
    
    
 }