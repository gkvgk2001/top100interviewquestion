// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
    // Write C++ code here
    //37. Write a Program to Print the Given String in Reverse Order
    

      string str = "GeeksforGeeks";
      
      for(int i = str.length()-1;i>=0;i--){
          cout<<str[i];
      }
      cout<<endl;

    return 0;
}