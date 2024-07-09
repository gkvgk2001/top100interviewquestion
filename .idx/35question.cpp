// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
    // Write C++ code here
    //35. Write a Program to Print Floyd’s Triangle
    
    /*
    
1
2 3
4 5 6
7 8 9 10
  
    
    
    
    */
    
    int n ;
    cout<<"enter your Numeber"<<endl;
    cin>>n;
     int start =1;
    
    for(int i =0;i<n;i++){
        
       
        //stars
       
        for(int j = 0;j<i+1;j++){
            cout<<start++<<" ";
        }
       cout<< endl;
    }
    

    return 0;
}