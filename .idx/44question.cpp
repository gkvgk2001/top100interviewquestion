// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>



int main() {
    // Write C++ code here
  
    
   //44. Write a Program to  Swap the Values of Two Variables Without Using any Extra Variable
   int a , b;
   cout<<"enter your first number"<<endl;
   cin>>a;
   cout<<"enter your second number"<<endl;
   cin>>b;
   
   cout<<endl;
   
   cout<<"before Swapping"<<endl;
   
   cout<<"first number "<<a<<endl;
   cout<<"enter your first number "<<b<<endl;
   
//   a = a+b;
//   b = a-b;
//   a = a-b;

    a = a^b;
    b = a^b;
    a = a^b;
    
   
   cout<<"After Swapping"<<endl;
   
   cout<<"first number "<<a<<endl;
   cout<<"enter your first number "<<b<<endl;
   
   
   
   
   
   
   

    return 0;
}