#include<bits/stdc++.h>
using namespace std; 
int main(){
int a[2][3], row, col ;
cout<< "enter the elements for matrix " <<endl ; 
for ( int row=0 ; row<2; row++ ){
    for( int col=0; col<3; col++){
            cout<<"A[" << row<< "]["<< col<< "] = ";
        cin>> a[row][col] ;
       
    }
    
}
cout<< "Now the actual matrix is " <<endl ; 
for (row=0 ; row<2; row++){
  for(col=0; col<3; col++){
    cout<< a[row][col]<< " "; 
  }
  cout<<endl ; 
} 
}