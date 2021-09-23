#include <stdio.h>
int main(){
  int number;
  printf("Please Enter a Number: ");
  scanf("%d", &number);
  if(number >  0){
    printf("Positive\n");
  }
  else if(number < 0){
    printf("Zero\n");
  }
  return 0;
}
