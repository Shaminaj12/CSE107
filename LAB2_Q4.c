#include <stdio.h>

int main(void) {
  int a,b,c;
  printf("Please enter a number:");
  scanf("%d", &a);
  printf("Please enter a number:");
  scanf("%d", &b);
  printf("Please enter a number: ");
  scanf("%d", &c);
  if(a > b && a>c){
    printf("largest number: %d\n", a);
  }else if(b>a && b>c){
    printf("largest number: %d\n", b);
  }else if(c>a && c>b){
    printf("largest number: %d\n", c);
  
  }
  if(a<b && a<c){
    printf("smallest number: %d\n", a);
  }else if(b<a && b<c){
    printf("smallest number: %d\n", b);
  }else if(c<a && c<b){
    printf("smallest number: %d\n", c);
  }
   return 0;
}
