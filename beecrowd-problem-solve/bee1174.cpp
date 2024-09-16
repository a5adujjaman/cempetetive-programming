#include<bits/stdc++.h>
using namespace  std; 
int main(){
double A[100];
for(int i=0; i<100; i++){
    cin>> A[i] ;
}
for(int i = 0; i<100; i++){
    double x=A[i];
    if(x <=10){
        cout<<"A"<<"["<<i<<"]"<<" = "<<x<<endl; 
    }
}


return 0;
}