// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
   //.6. Write a Program to Print Check Whether a Character is an Alphabet or Not
    cout<<"enter your character"<<endl;
    char ch;
    cin>>ch;
    
    if(isalpha(ch)){
        cout<<ch<<" it is a alphabet"<<endl;
    }
    
    else{
        cout<<ch<<" it is not  a alphabet"<<endl;
        
    }

    
    
  
    
   

    return 0;
}