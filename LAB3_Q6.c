#include <stdio.h>

int main(void) {
  
  int n=12345;
  int reverse = 0;
  int digit;
  int digitSum = 0;
  while(n!=0){
    digit = n % 10;
    n = n / 10;
    reverse = reverse * 10 + digit;
    digitSum = digitSum + digit;
  }
  printf("Reverse Number: %d\n",reverse);
 
  printf("Digit Sum: %d\n", digitSum);
  return 0;
}

  

