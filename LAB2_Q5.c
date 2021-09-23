#include <stdio.h>
int main(void)
{
  int i;
  int x,y;
  int res = 1;
  printf("Please enter a value x:");
  scanf("%d",&x);
  printf("Please enter a value y:");
  scanf("%d",&y);
  for(i=1;i<=y;i=i+1){
    res = res * x;
  }
  printf("%d\n",res);
  
  return 0;
}
