// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
   //.15. Write a Program to Find a Leap Year or Not


    cout<<"enter your n"<<endl;
    
   int n;
   cin>>n;
   
   if(n%4 == 0){
       
       if(n%400 ==0){
           cout<<n<<" It is a leap year"<<endl;
       }
       else if(n%100 == 0){
           cout<<n<<" It is not a leap year"<<endl;
           
       }
       else{
           cout<<n<<" It is a leap year"<<endl;
       }
       
   }
   else{
       
       cout<<n<<" It is not  a leap year"<<endl;
       
   }
    
   
    

    return 0;
}