#include<bits/stdc++.h>
using namespace std; 
int main(){
int x[10];   
for(int i =0; i<10 ; i++){
    cin>>x[i]; 
}
for(int i=0; i<10; i++){
    if(x[i]<=1){
        cout<<"x"<<"["<<i<<"]"<<" = 1\n"; 
    }
    else{
        cout<<"x"<<"["<<i<<"]"<<" = "<<x[i]<<endl; 
    }
}
}