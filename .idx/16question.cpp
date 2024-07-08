// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
bool checkprime(int n){
    
    if(n<=1){
        return false;
    }
    
    for(int i =2;i<n;i++){
        
        if(n%i ==0){
            return false;
        }
    }
    return true;
}
int main() {
   //.16. Write a Program to Check the Prime Number


    cout<<"enter your n"<<endl;
    
   int n;
   cin>>n;
   
   if(checkprime(n)){
       cout<< n <<" it is a prime no"<<endl;
   }
   
   else{
       
       cout<<n<<" it is not a prime no"<<endl;
       
   }
   
  
   

    return 0;
}