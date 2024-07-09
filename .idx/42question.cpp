// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>



int main() {
    // Write C++ code here
   
    
    //42. Write a Program to Count the Sum of Numbers in a String


    

   string str = "123467";
   
   int sum = 0;
   
   int n = str.length();
   
   for(int i =0;i<n;i++){
       
       sum+= str[i]-'0';
   }
   
   cout<<sum<<endl;

    return 0;
}