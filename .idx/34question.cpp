// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
    // Write C++ code here
    //34. Write a Program to Print a Triangle Star Pattern
    
    /*
    
*
**
***
****
*****
  
    
    
    
    */
    
    int n ;
    cout<<"enter your Numeber"<<endl;
    cin>>n;
    
    for(int i =0;i<n;i++){
        
       
        //stars
        for(int j = 0;j<i+1;j++){
            cout<<"*";
        }
       cout<< endl;
    }
    

    return 0;
}