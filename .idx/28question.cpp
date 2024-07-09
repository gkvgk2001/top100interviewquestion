// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
    //Write a Program to Print a Diamond Pattern
    /*
          ---*
            ***
           *****
          *******
           *****
            ***
             *
    
    
    */
    
    int n;
    cout<<"enter the No: "<<endl;
    cin>>n;
    
    
    for(int i = 0;i<n;i++){
        
        //spaces
        
        for(int j =n-i-1;j>0;j--){
            cout<<" ";
        }
        
        //pyramid pattern
        
        for(int j = 0;j<2*i+1;j++){
            cout<<"*";
        }
        
        cout<<endl;
        
        
    }
    
    //inverted pyramid
    
    int n1 = n-1;
    
    
     for(int i = 0;i<n1;i++){
        
        //spaces
        
        for(int j =0;j<i+1;j++){
            cout<<" ";
        }
        
        //pyramid pattern
        
        for(int j = 2*n1-2*i-1;j>0;j--){
            cout<<"*";
        }
        
        cout<<endl;
        
        
    }
    
    
    return 0;
}