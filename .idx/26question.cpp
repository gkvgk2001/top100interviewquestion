// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

bool findpalindrome(string  S , int i){
    // int start = 0;
    // int end = S.length()-1;
    
    // while(start<=end){
        
        
        
    //     if(S[start]!= S[end]){
    //         return false;
    //     }
        
    //     start++;
    //     end--;
    // }
    
    // return true;
    //secondmethod
    
    //base case
    
    int n = S.length();
    
    if(i>=S.length()){
        return true;
    }
    
    if(S[i]!=S[n-i-1]){
        return false;
    }
    
    return findpalindrome(S , i+1);
    
    
}




int main() {
//26. Write a Program to Check if the Given String is Palindrome or Not
   
      string S = "GeekeeG";
      int i = 0;
      
       findpalindrome(S , i);
     
     if(findpalindrome(S , i)){
         
         cout<<"your String "<<S<<" is palindrome String"<<endl;
         
     }
     
     else{
         
         cout<<"your String "<<S<<" is not palindrome String"<<endl;
         
     }
   

    
    
    return 0;
}