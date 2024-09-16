#include<stdio.h>

int main(){
    int n; 
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
           int j=i*i;
           int k=i*i*i; 
        printf("%d %d %d\n",i,j,k);
        printf("%d %d %d\n",i,j+1,k+1);
        
    }


return 0; 
}