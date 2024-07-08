// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
   //.14  Write a Program to Find the Factorial of a Number Using Loops


    cout<<"enter your n"<<endl;
    
   int n;
   cin>>n;
   
   int fact = 1;
    
    
    for(int i =1;i<=n;i++){
        
        fact*=i;
     
    }
    
   
    
    cout<<fact<<endl;
   
   
    return 0;
}