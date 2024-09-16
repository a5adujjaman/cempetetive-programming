#include<bits/stdc++.h>
using namespace std;
int main(){
   float num1, num2; 
   cout<< "Enter 2 numbers: ";
   cin>>num1>>num2;
   
  // cout<<showpoint; 
  cout<<fixed; 
  cout<<setprecision(2);
   
   float sum= num1+num2; 
   cout<<setw(20) <<"the sum is : "<<sum; 
   cout <<endl; 
   
   float sub = num1-num2; 
   cout<< setw(20) <<"Subtracation is : "<< sub; 
   cout<< endl ; 
   
   // cout<<noshowpoint; porer gulo ar doshomik dekhabe na
   
   float mul = num1*num2; 
   cout<<setw(20) <<"Multiplication is : "<<mul ; 
   cout<<endl ; 
   
   double div = (float) num1/num2; //this is type casting
   cout<< setw(20) <<"Division is : "<<div;  
   cout<<endl; 
//   int rem = num1%num2; 
//   cout<<"The reminder is = "<< rem ; 
//   cout<<endl ; 
//   integer type chara reminder kaj kore na. 


return 0; 
}