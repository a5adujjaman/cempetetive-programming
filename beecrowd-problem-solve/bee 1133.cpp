#include<bits/stdc++.h>
using namespace std; 
int main(){

int x,y; 
cin>>x>>y; 
if(x>y && y>0 && x>0){
        int i;
    for(i=y+1; i<x; i++){
        if(i%5==2 || i%5==3){
            cout<<i<<endl;
        }
    }
}
else if (y>x && y>0 && x>0){
    int i; 
    for(i=x+1; i<y; i++){
            if(i%5==2 || i%5==3){
            cout<<i<<endl;
        }
        
    }
}
return 0; 
}