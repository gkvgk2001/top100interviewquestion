// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

bool palindrome(string str , int i){

    if(i>=str.length()){
        return true;
        
    }
    
    if(str[i]!=str[str.length()-i-1]){
        return false;
    }
    
    return palindrome(str , i+1);
    
    
    
}

int lengthstring(string str , int i){
    int length =i;
    
    if(str[i] == '\0'){
        return length;
    }
    
    ++length;
    return lengthstring(str , i+1);
}


// int lengthstring(string str , int i , int length){
    
    
//     if(str[i] == '\0'){
//         return length;
//     }
    
//     ++length;
//     return lengthstring(str , i+1 , length);
// }

int main() {
    // Write C++ code here
    //39. Write a Program to Check if the Given String is Palindrome or not Using Recursion
    //40. Write a Program to Calculate the Length of the String Using Recursion
    

      string str = "G";
      
    
    //using recursion
    int i = 0;
    
   palindrome(str , i);
   
   int ans = lengthstring(str ,i);
   cout<<ans<<endl;
   
   if(palindrome(str , i)){
       cout<<"ypur given string is paindrome"<<endl;
   }
   
   else{
       cout<<"your given string is not palindrome"<<endl;
   }
      cout<<endl;

    return 0;
}