#include <stdio.h>

int main() 
{
  int c,d,temp;
  printf("\n Enter Value of c:");
  scanf("%d",&c);
  printf("\n Enter value of d:");
  scanf("%d",&d);
  printf("\n before change, c=%d and d=%d",c,d);
  temp=c;
  c=d;
  d=temp;
  printf("\n after interchange, c=%d and d=%d",c,d);
  return 0;
}
