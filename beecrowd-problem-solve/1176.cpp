#include <bits/stdc++.h>
using namespace std;
int main(){
  int t,f;
long long n[61];

  cin>> t;
  n[0]=0;
  n[1]=1;
  
  for (int j = 2; j <= 60; j++)
    {
        n[j] = n[j - 2] + n[j - 1];
    }
  for(int i=0; i<t; i++){
    cin>>f;
    cout<< "Fib("<<f<<") = "<< n[f]<<endl;
  }
return 0;
}




