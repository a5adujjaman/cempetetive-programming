#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int a, b,c ; 
    cout<<"Enter three number "<<endl; 
    cin>> a>> b >> c; 
    if (a<b && a<c){
        cout<<a<<" is small";
        
    }
    else if (b<a && b<c){
        cout<<b<<" is small";
    }
    else {
        cout<<c<<" is small";
    }
    return 0; 
}