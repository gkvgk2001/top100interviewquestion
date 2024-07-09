// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
    //30. Write a Program to Print the Hourglass Pattern
    /*
* * * * * * * * *
  * * * * * * *
    * * * * *
        * * *
            *
        * * *    
    * * * * *
  * * * * * * *    
* * * * * * * * *    
    
    
    */
    
    int n;
    cout<<"enter the No: "<<endl;
    cin>>n;
    
    
    for(int i = 0;i<n;i++){
        
        //spaces 0 1 2 4 6
        
        for(int j =0;j<2*i;j++){
            
            if(i ==1 && j>=i){
                continue;
            }
            
            else if(i == n-1 &&j> 2*n-2 ){
                continue;
            }
            
            else{
                cout<<" ";
            }
        }
        
        //pyramid pattern
        
        for(int j = 0;j<2*n-2*i-1;j++){
           
            cout<<"* ";
        }
        
        cout<<endl;
        
        
    }
    
    //inverted pyramid
    
    int n1 = n-1;
    
    
     for(int i = 0;i<n1;i++){
        
        //spaces
        
        for(int j =0;j<n-i;j++){
            cout<<" ";
        }
        
        //pyramid pattern
        
        for(int j = 0;j<2*i+1;j++){
             if(i==0){
                continue;
            }
            cout<<"* ";
        }
        
        cout<<endl;
        
        
    }
    
    
    return 0;
}