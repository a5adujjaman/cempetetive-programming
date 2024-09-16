#include<bits/stdc++.h>
using namespace std; 
int main(){
int n, i,x,y,j,sum1=0, current = 1, previous=0; 
cin>>n; 
for(i=1; i<=n; i++){
    cin>>x>>y; 
    for(j=1; j<=y; j++){
        if(x%2==0){
           sum1 +=x; 
             
        }
        current += previous; 
        previous = current; 
        
    }
    cout << sum1 <<endl; 
}


return 0; 
}