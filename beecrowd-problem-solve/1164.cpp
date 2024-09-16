#include<bits/stdc++.h>
using namespace std; 
int main(){
int n,i; 
cin>> n; 
for(i=1; i<=n; i++){
        int x;
    cin>>x;
    int j;
    for(j=1; j<n; j++){
    int k=x%j;
    if(k==0){
      int l=0;
       l+=i;
       if(l==n){
    cout<<x<<" "<<"eh perfeito"<<endl; 
}
else{
    cout<<x<<" "<<"nao eh perfeito"<<endl; 
} 
       }
          
    }

    }



return 0; 
}