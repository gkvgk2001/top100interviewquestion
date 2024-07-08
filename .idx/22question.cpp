// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void findtheroot(int a , int b , int c , vector<int>&ans){
    
    if(a == 0){
        cout<<"undefined"<<endl;
        return;
    }
    
     //-b+- root(b2 -4ac)/2a
     
     int n1 = pow(b , 2) - 4*a*c;
     
     int ans1 = sqrt(n1);
     
     if(n1 ==0){
         cout<<"roots are real and identical"<<endl;
         int mainans1 = (-b+ans1)/(2*a);
          cout<<"the first and second root of"<<a<<"x²+"<<b<<"x+"<<c<<" : "<<mainans1<<endl;
       
     }
     
     else if(n1 <0){
         cout<<"roots are imaginary"<<endl;
       
        cout<<-b/2*a<<ans1/(2*a)<<"i"<<endl;
        cout<<-b/2*a<<ans1/(2*a)<<"-i"<<endl;
     }
     
     else{
         cout<<"roots are real and diffrent"<<endl;
         
         int mainans1 = (-b+ans1)/(2*a);
        int mainans2 = (-b-ans1)/(2*a);
     
   
     
     cout<<"the first root of"<<a<<"x²+"<<b<<"x+"<<c<<" : "<<mainans1<<endl;
     
      cout<<"the second root of"<<a<<"x²+"<<b<<"x+"<<c<<" : "<<mainans2<<endl;
     }
     
     
     
     
    
}

int main() {

    //22. Write a Program for Finding the Roots of a Quadratic Equation

    cout<<"enter your n"<<endl;
    
    cout<<"Enter the value of a "<<endl;
   int a , b ,c;
    cin>>a;
    cout<<"Enter the value of b "<<endl;
    cin>>b;
    
     cout<<"Enter the value of c "<<endl;
    cin>>c;
    
    vector<int>ans;
    
    findtheroot(a,b,c,ans);
    
  
   

    return 0;
}