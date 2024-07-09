// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
    // Write C++ code here
    //32. Write a Program to Print a Simple Pyramid Pattern
    
    /*
    
     *
    ***
   *****
  *******
 *********
    
    
    
    */
    
    int n ;
    cout<<"enter your Numeber"<<endl;
    cin>>n;
    
    for(int i =0;i<n;i++){
        
        //space
        
        for(int j = 0;j<n-i-1;j++ ){
            cout<<" ";
        }
        //stars
        for(int j = 0;j<2*i+1;j++){
            cout<<"*";
        }
       cout<< endl;
    }
    

    return 0;
}