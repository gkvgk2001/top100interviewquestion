// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
   //.7. Write a Program to Find the Length of the String Without using strlen() Function 
    cout<<"enter your character"<<endl;
    string str = "gaurav KUmar";
    
    int length = 0;
  
    
   for(int i = 0;str[i]!='\0';i++){
       
       length++;
       
   }
   
   cout<<length<<endl;

    
    
  
    
   

    return 0;
}