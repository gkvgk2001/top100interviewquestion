// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int fibo(int n){
    
    if(n<=1){
        return n;
    }
    
    return fibo(n-1)+fibo(n-2);
}
int main() {
   //19.Write a Program to Find the Nth Term of the Fibonacci Series


    cout<<"enter your n"<<endl;
    
   int n;
   cin>>n;
   
   
//   int ans = fibo(n);
   
//   cout<<"The "<<n<<" term is "<<ans<<endl;
   
   
   
   //Second method
   
   if(n==0){
       return 0;
   }
   
   if(n ==1){
       return 1;
   }
   
   int a = 0;
   int b= 1;
   int curr; //current term
   
   
   //start from 2nd term as first two term already taken by default
   
   
   for(int i = 2;i<=n;i++){
       
       curr = a+b;
       a = b;
       b = curr;
       
   }
   
    cout<<"The "<<n<<" term is "<<curr<<endl;
   
   
    return 0;
}