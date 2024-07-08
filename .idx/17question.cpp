// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
   //.17. Write a Program to Check Palindrome


    cout<<"enter your n"<<endl;
    
   int n;
   cin>>n;
   
   int temp = n;
   
   int rev;
   
   while(temp!=0){
       
       int digit = temp%10;
       
       rev = rev*10+digit;
       
       temp = temp/10;
   }
   cout<<rev<<endl;
   
   
   if(rev == n){
       
       cout<<n<<" it is a palindrome no"<<endl;
   }
   
   else{
      cout<<n<<" it is not a palindrome no"<<endl;
   }
   
  
   
  
   

    return 0;
}