#include <bits/stdc++.h>
using namespace std;
int main() {
 
     string s;
     int m,n;
     cin>>m>>n;
     for(int i=1;i<=n;i++)
     {
         cin>>s;
         if(s=="fechou")
         {
         m++;
         }
         else{
         m--;
         }
     }
     cout<<m<<endl;
 
    return 0;
}