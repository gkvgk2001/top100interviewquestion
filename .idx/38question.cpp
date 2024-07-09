// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void reverse(string str , int i){

    if(i<0){
        return;
        
    }
    cout<<str[i];
    reverse(str , i-1);
    
    
    
}

int main() {
    // Write C++ code here
    //38. Write a C++ Program to Print the Given String in Reverse Order Using Recursion
    

      string str = "GeeksforGeeks";
      
    
    //using recursion
    int i = str.length()-1;
    
   reverse(str , i);
      cout<<endl;

    return 0;
}