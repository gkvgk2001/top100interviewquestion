// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
   //.11. Write a Program to Remove All Characters From a String Except Alphabets


    cout<<"enter your character"<<endl;
    
    string str = "Gee$ksfor$geeksGee$k43634564sfor$geeks353w4";
    
    string ans = "";
    
    
    for(int i =0;i<str.length();i++){
        
        if(isalpha(str[i])){
            ans.push_back(str[i]);
        }
        
    }
    
   
    
    cout<<ans<<endl;
   
   

    return 0;
}