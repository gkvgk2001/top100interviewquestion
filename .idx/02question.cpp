// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
     //2. Write a Program to Find the Greatest of the Three Numbers.
    cout<<"enter your Numbers"<<endl;
    int a , b ,c;
    cin>>a >>b>>c;
    cout<<endl;
    
    if(a>=b&& a>=c){
        cout<<"The greayer number is a "<<a<<endl;
        
    }
     else if(b>a&& b>=c){
        cout<<"The greayer number is b "<<b<<endl;
        
    }
    
    
    else{
                cout<<"The greayer number is c "<<c<<endl;
        
   
    }
    

    return 0;
}