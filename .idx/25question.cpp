// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
//25. Write a Program to Calculate the Sum of Elements in an Arra
    vector<int>arr = { 10, 20, 300, 40, 5  , 11 , 7};
    
    int n = arr.size();
    
    int sum = 0;
    
    
     for(int i =0;i<n;i++){
         
         sum+=arr[i];
       
    }
    
    cout<<"sum of Element in array "<<sum<<endl;
    
    
    return 0;
}