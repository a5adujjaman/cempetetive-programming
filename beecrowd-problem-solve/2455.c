#include<stdio.h>
int main(){
int p1, c1, p2, c2,j,k;
scanf("%d %d %d %d", &p1, &c1, &p2, &c2);
j= p1*c1; 
k= p2*c2; 
if (j==k) {
    printf("0\n");
    }
else if (j>k)
  {
      
    printf("-1\n");
    }
else {printf("1\n");
}
return 0;
}