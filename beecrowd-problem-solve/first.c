#include<stdio.h>
int main(){
int t, s ,i,j=0,k=0,l=0;
for(;;){
scanf("%d", &t);
for (i=1; i<=t ; i++){
    scanf("%d",&s);
    if(s<10){
    j++;
}
else if (s>=10 && s<20){
    k++;
}
else if (s>=20){
    l++;
}
}
if (l>=1){
    printf("3\n");
}
else if (k>=1){
    printf("2\n");
}
else{
    printf("1\n");
}
}
  return 0; 
}