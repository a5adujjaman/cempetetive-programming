#include <stdio.h>
//void swap(int *i, int *j);
int main()
{
  int T,i , cnt=0, a;

  scanf("%d",&T);
  for (i=0; i<5; i++)
  {
  scanf("%d",&a);
  if (a==T)
  cnt++;
  }
  printf("%d\n",cnt);
  return 0;
}
