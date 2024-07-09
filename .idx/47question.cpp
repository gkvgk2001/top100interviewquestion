// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

#define N 20;



int main() {
    // Write C++ code here
  
    
   //47. Write a Program to Find the Maximum and Minimum of the Two Numbers Without Using the Comparison Operator
   int a , b;
   cout<<"enter your first number"<<endl;
   cin>>a;
   cout<<"enter your second number"<<endl;
   cin>>b;
   
   cout<<endl;
   
   
   int maxi = (a+b + abs(a-b))/2;
   int min = (a+b - abs(a-b))/2;
   
   
   cout<<"Maximum No between "<<a<<" ,"<<b<<" is : "<<maxi<<endl;
    cout<<"Mainimum No between "<<a<<" ,"<<b<<" is: "<<min<<endl;
    
    
    return 0;
}