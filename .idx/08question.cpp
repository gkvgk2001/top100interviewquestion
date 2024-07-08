// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
   //.8. Write a Program to Toggle Each Character in a String 
    cout<<"enter your character"<<endl;
    
    string str = "gaurav KUMar";
    
    for(int i = 0;i<str.length();i++){
        
        if(islower(str[i])){
            str[i] = toupper(str[i]);
        }
        
        else if(isupper(str[i])){
            str[i] = tolower(str[i]);
        }
    }
    
    cout<<str<<endl;
   

    
    
  
    
   

    return 0;
}