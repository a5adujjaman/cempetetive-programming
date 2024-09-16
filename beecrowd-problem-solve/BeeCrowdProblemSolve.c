#include <stdio.h>
int main()
{  double a,b,c,x,y,z;
  scanf("%lf %lf %lf",&a, &b, &c);
  x=a*a; 
  y=b*b;
  z=c*c;
  
  if (a>=b+c || b>=a+c || c >= a+b){
    printf("NAO FORMA TRIANGULO\n");
  }
  else if (x==y+z || y==x+z || z==x+y){
    printf("TRIANGULO RETANGULO\n");
  }
  else if (x>y+z || y>x+z || z>x+y){
    printf("TRIANGULO OBTUSANGULO\n");
  }
  else if(x<y+z || y<x+z || z<x+y){
    printf("TRIANGULO ACUTANGULO\n");
  }
  if (a==b && b==c){
    printf("TRIANGULO EQUILATERO\n");
  }
  if (a==b && a!=c || b==c && b!=a || c==a && c!=b ){
    printf("TRIANGULO ISOSCELES\n");
  }
  
   return 0;
}