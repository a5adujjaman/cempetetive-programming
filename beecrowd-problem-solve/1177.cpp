#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>> t; 
  int x=0; 
        
  for(int i=0; i<1000; i++){
     cout<<"N["<<i<<"] = "<< x<<endl; 
     x++;
     if(x==t){
        x=0;
     }
  }
return 0;
}