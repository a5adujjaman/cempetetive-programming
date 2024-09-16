#include<bits/stdc++.h>
using namespace std;

int main()
{
  int X,Y;
  float price;
  cin>>X>>Y;
  if (X==1){
    price=4*Y;
  }
  else if (X==2){
    price=4.5*Y;
  }
  else if (X==3){
    price=5*Y;
  }
  else if (X==4){
    price=2*Y;
  }
  else if (X==5){
    price=1.5*Y;
  }
  cout<<("Total: R$ %.2f\n", price);


    return 0;
