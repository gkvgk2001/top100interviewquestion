// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
   //.10 Write a Program to Remove the Vowels from a String
    cout<<"enter your character"<<endl;
    
    string str = "gaurav KUMar";
    int j =0;
    
    for(int i =0;i<str.length();i++){
        if(tolower(str[i]) != 'a' && tolower(str[i]) != 'e' && tolower(str[i]) != 'i'&& tolower(str[i]) != 'o'&& tolower(str[i]) != 'u'){
            
            str[j] = str[i];
            j++;
            
            
            
        }
        
        
    }
    
    while(j<str.size()){
        str[j] = '\0';
        j++;
    }
    
    cout<<str<<endl;
   
   

    
    
  
    
   

    return 0;
}