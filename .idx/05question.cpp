// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
   //5. Write a Program to Check Whether a Character is a Vowel or Consonant
    cout<<"enter your Numbers"<<endl;
    string str = "abcdfreio";
    int count;
    
    for(int i = 0;i<str.length();i++){
        
        if(str[i] == 'a' || str[i] == 'e'|| str[i] == 'i'|| str[i] =='o'||str[i] == 'u'){
            
            count++;
            
            
        }
    }
    
    cout<<count<<endl;
   
    
    
  
    
   

    return 0;
}