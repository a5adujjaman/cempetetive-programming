#include<bits/stdc++.h>
using namespace std; 
int main(){
    //checking all the number from loop is even or odd
   
   int x;   //here x used for user input how much time he wanted to run 
   cin>> x; 
   int num; 
   for(int i= 1; i<=x; i++){
    cin>> num; 
    if (num%2==0){
        cout<<"even"<< endl;
    }
    else{
        cout<< "odd"<< endl;
    }
    
    
   }
return 0 ; 
}