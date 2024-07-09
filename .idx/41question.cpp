// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int factorial(int n ){
    
    if(n==0){
        return 1;
    }
    
    return n*factorial(n-1);
}


int main() {
    // Write C++ code here
    //41. Write a Program to Calculate the Factorial of a Number Using Recursion
    
  


    

    int n;
    cout<<"Enter your number"<<endl;
    cin>>n;
    
    int ans = factorial(n);
    
    cout<<"factorial of"<< n<<" : "<<ans<<endl;
      
    
    

    return 0;
}