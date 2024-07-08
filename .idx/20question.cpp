// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
   //20. Write a Program to Calculate the Greatest Common Divisor of Two Numbers
   //21. Write a Program to Calculate the Lowest Common Multiple (LCM) of Two Numbers

     
    cout<<"Enter your First No"<<endl;
   int n1 , n2;
    cin>>n1;
    cout<<"Enter your Second No"<<endl;
    cin>>n2;
    int HCF =1;
    int LCM;
    
    for(int i = 1;i<=n1 && i<=n2;i++){
        
        if(n1%i ==0 && n2%i ==0){
            HCF = i;
        }
    }
    
    LCM = (n1*n2)/HCF;
    
    cout<<"Highest common Factor of no "<<n1<<","<<n2<<": "<<HCF<<endl;
    cout<<"Least common Factor of no "<<n1<<","<<n2<<": "<<LCM<<endl;
   
   

    return 0;
}