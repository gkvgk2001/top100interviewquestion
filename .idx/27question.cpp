// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

bool findanagram(string s , string t){
    
    if(s.length()!=t.length()){
        return false;
    }
    
    vector<int>freq(255 , 0);
    
    for(int i =0;i<s.length();i++){
        freq[s[i]]++;
    }
    
    for(int j = 0;j<t.length();j++){
        
        freq[t[j]]--;
        
    }
    
    for(int i = 0;i<256;i++){
        
        if(freq[i]!=0){
            return false;
        }
    }
    
    return true;
}

int main() {
    // Write C++ code here
   //27. Write a Program to Check if Two Strings are Anagram or Not
   
   
   string s = "anagram";
   string t = "nagaramew";
   
   findanagram(s , t);
   
    if(findanagram(s , t)){
         cout<<"your String "<<s<<" and "<<t<< " is angram of each other"<<endl;
     }
     
     else{
      cout<<"your String "<<s<<" and "<<t<< " is not a  angram of each other"<<endl;
     }

    return 0;
}