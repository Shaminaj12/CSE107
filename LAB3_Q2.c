#include <stdio.h>

int main(void) {
  int n = 3;
  int i;
  int sum = 0;
  for(i=1;i<=n;i=i+1){
    sum = sum + i;
  }
  printf("%d\n", sum);
  sum=0;
  i = 1;
  while(i<=n){
    sum = sum +i;
    i=i+1;
  }
  printf("%d\n",sum);
  sum = 0;
  i=1;
  do{
  sum = sum +i;
   i=i+1;
  }while(i<=n);
  printf("%d\n",sum);
  return 0;
}
