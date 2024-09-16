#include<stdio.h>
int main(){
int x,i,k=1; 
scanf("%d",&x);
for(i=1; i<=x; i++){
  k *= i;
}
}
printf("%d\n",k);
return 0;
}