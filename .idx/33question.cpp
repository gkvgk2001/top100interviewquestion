// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
    // Write C++ code here
    //33. Write a Program to print an Inverted Pyramid 
    
    /*
    
*********
 *******
  *****
   ***
    *
  
    
    
    
    */
    
    int n ;
    cout<<"enter your Numeber"<<endl;
    cin>>n;
    
    for(int i =0;i<n;i++){
        
        //space
        
        for(int j = 0;j<i;j++ ){
            cout<<" ";
        }
        //stars
        for(int j = 0;j<2*n-2*i-1;j++){
            cout<<"*";
        }
       cout<< endl;
    }
    

    return 0;
}