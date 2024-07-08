// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
   //18 Write a Program to Check Whether a Number is an Armstrong Number or Not


    cout<<"enter your n"<<endl;
    
   int n;
   cin>>n;
   
   int temp = n;
   
   int arm;
   
   while(temp!=0){
       
       int digit = temp%10;
       
       arm = arm+digit*digit*digit;
       
       temp = temp/10;
   }
   cout<<arm<<endl;
   
   
   if(arm == n){
       
       cout<<n<<" it is Armstrong No"<<endl;
   }
   
   else{
      cout<<n<<" it is not a Armstrong no"<<endl;
   }
   
  
   
  
   

    return 0;
}