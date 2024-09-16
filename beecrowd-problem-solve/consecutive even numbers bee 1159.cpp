#include<bits/stdc++.h>
using namespace std;
int main(){
int x; 
for(;;){
cin>>x;
if(x>0){
    if(x%2==0){
            int i;
            int sum=0;
            
        for(i=1; i<=5; i+2){
            sum=x+2;
            
        }
        cout<<sum<<endl;
    }
    else{
            int j;
            int sum2;
            sum2=0;
        for(j=1; j<=5; j+1){
            sum2+=x;
             
        }
       cout<<sum2<<endl;
    }
        
    }
    else{
          abort();
    }
return 0;
}
}

