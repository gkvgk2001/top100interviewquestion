// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
    //Write a Program to Print a Pyramid Pattern

    /*
              *
             ***
            *****
           *******
    
    
    */
    
    int n;
    cout<<"enter the No: "<<endl;
    cin>>n;
    
    
    for(int i = 0;i<n;i++){
        
        //spaces
        
        for(int j =0;j<n-i-1;j++){
            cout<<" ";
        }
        
        //pyramid pattern
        
        for(int j = 0;j<2*i+1;j++){
            cout<<"*";
        }
        
        cout<<endl;
        
        
    }
    
    return 0;
}