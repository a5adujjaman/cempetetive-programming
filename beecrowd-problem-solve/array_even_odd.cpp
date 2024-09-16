#include<bits/stdc++.h>
using  namespace std; 

//even odd

int main(){
    int num[5];
    
    for(int i=0; i<5; i++){
      cin>> num[i] ; 
    }
   cout<< "Even"  <<endl ;
   for(int i=0; i<5; i++){
              if(num[i]%2 == 0)
              cout<< num[i] << endl; 
   }
  cout<< "Odd"<< endl;
   for(int i=0; i<5; i++){
              if(num[i]%2 != 0)
              cout<< num[i] << endl; 
   }


/*
int main(){
    int num[5];
    
    for(int i=0; i<5; i++){
      cin>> num[i] ; 
    }
    for (int i=0; i<5; i++){
        cout<< num[i]; 
    }
    
*/
    
//    int num[5];
//    for(int i=0; i<5; i++){
//        cin>> num[i] ; 
//        cout<< num[i]<< endl; 
//    }
    

return 0 ; 
}