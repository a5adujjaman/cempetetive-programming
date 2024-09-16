#include<bits/stdc++.h>
using namespace std ; 
int main(){
    int N;
    cin>>N;
int X[N]; 
for(int i=0; i<N; i++) {   
        cin>>X[i];
}
int smallest;
int position; 
smallest = X[0];
for(int i=0; i<N; i++){
if(X[i]<smallest){
    smallest=X[i];
    position=i;
}
 }  
 cout<<"Menor valor: "<<smallest<<endl;
 cout<<"Posicao: "<<position<<endl;
return 0; 
}