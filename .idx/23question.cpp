// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int findmaxi(vector<int>&arr){
    
    int n = arr.size();
    
    int maxi = INT_MIN;
    
    for(int i =0;i<n;i++){
        
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    
    return maxi;
    
}


int findmini(vector<int>&arr){
    
    int n = arr.size();
    
    int mini = INT_MAX;
    
    for(int i =0;i<n;i++){
        
        if(arr[i]<mini){
            mini = arr[i];
        }
    }
    
    return mini;
    
}

int main() {
    //23. Write a Program to Find the Smallest and Largest Element in an Array
    
    vector<int>arr = { 10, 20, 300, 40, 5  , 11 , 7};
    
    int maxi = findmaxi(arr);
    int mini = findmini(arr);
    
    cout<<"Largest No : "<<maxi<<endl;
    cout<<"Smallest No : "<<mini<<endl;
    
    return 0;
}