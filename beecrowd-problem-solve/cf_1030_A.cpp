#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n;
   int num[101];
cin>>n; 
for(int i=1; i<=n; i++){
    cin>>num[i];
}
int easy=0;
int hard=0;
for(int i=1; i<=n ; i++){
    if(num[i]==0){
        easy++;
    }
    else{
        hard++;
    }
}
if(hard>0){
    cout<<"HARD\n";
}
else{
    cout<<"EASY\n";
}
return 0; 
}