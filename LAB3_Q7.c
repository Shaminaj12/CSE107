#include <stdio.h>

int main(void) {
  
  int i;
  int n = 4;
  int isPrime = 1;
  printf("Please enter a number to check prime or not\n");
  scanf("%d", &n);
  for(i=2; i<n;i=i+1){
    if(n%i == 0){
      isPrime = 0;
    }
  }
  if(isPrime == 1){
    printf("Is Prime Number\n");
  }
  else if(isPrime == 0){
    printf("Is NOT a Prime Number\n");
  }
  
   
  return 0;
}
