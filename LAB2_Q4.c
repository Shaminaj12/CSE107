#include <stdio.h>
int main(void){
  int i = 1;
  int k = 1;
  for(i=1;i<=5;i=i+1){
    k = k*i;
  }
  printf("%d\n",k);
  
  return 0;
}
