#include<bits/stdc++.h>
using namespace std; 
int main(){
int i, j=0, k=0,l,z,n,m; 
cin>>n>>m;
string click, fechou, clicou; 
for (i=1; i<=m ; i++){
cin>> click; 
if (click==fechou){
    j++; 
}
if (click==clicou){
    k++;
}
}
//l=;
z=j*2+n-j-k;  

cout<< z; 

}




