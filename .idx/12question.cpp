// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
   //.12. Write a Program to Remove Spaces From a String


    cout<<"enter your character"<<endl;
    
    string str = "Gfg to the moon";
    
    string ans = "";
    
    
    for(int i =0;i<str.length();i++){
        
        if(str[i]!= ' '){
            ans.push_back(str[i]);
        }
        
    }
    
   
    
    cout<<ans<<endl;
   
   
    return 0;
}