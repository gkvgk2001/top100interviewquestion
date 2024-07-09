// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int findsecondmaxi(vector<int>&arr){
    
    int n = arr.size();
    
    int maxi = INT_MIN;
    int secondmaxi = INT_MIN;
    
    for(int i =0;i<n;i++){
        
        if(arr[i]>maxi){
           secondmaxi = maxi;
           maxi = arr[i];
        }
        
        else if(arr[i]<maxi && arr[i]>secondmaxi){
            secondmaxi = arr[i];
            
        }
    }
    
    return secondmaxi;
    
}

int findsecondmini(vector<int>&arr){
    
    int n = arr.size();
    
    int mini = INT_MAX;
    int secondmini = INT_MAX;
    
    for(int i =0;i<n;i++){
        
        if(arr[i]<mini){
           secondmini = mini;
           mini = arr[i];
        }
        
        else if(arr[i]>mini && arr[i]<secondmini){
            secondmini = arr[i];
            
        }
    }
    
    return secondmini;
    
}




int main() {
    //24. Write a Program to Find the Second Smallest Element in an Array
    
    vector<int>arr = { 10, 20, 300, 40, 5  , 11 , 7};
    
    int maxi = findsecondmaxi(arr);
    int mini = findsecondmini(arr);
    
    cout<<"SecondLargest No : "<<maxi<<endl;
    cout<<"SecondSmallest No : "<<mini<<endl;
    
    return 0;
}