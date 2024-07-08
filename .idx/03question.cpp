// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
    //3. C++ Program To Check Whether Number is Even Or Odd
    cout<<"enter your Numbers"<<endl;
    int a;
    cin>>a;
    cout<<endl;
    
    // if(a%2 ==0){
    //     cout<< a <<" Your no is even"<<endl;
    // }
    // else{
    //     cout<< a <<" Your no is odd"<<endl;
        
    // }
    
    //second metthd
    
    
    
    //   if((a^1) == a+1){
    //     cout<< a <<" Your no is even"<<endl;
    // }
    // else{
    //     cout<< a <<" Your no is odd"<<endl;
        
    // }
    
    
    //third method
    
      if(!(a&1)){
        cout<< a <<" Your no is even"<<endl;
    }
    else{
        cout<< a <<" Your no is odd"<<endl;
        
    }
    
   

    return 0;
}