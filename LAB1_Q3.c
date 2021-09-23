#include <stdio.h>

int main(void) {
  int num, d1, d2, d3, d4, d5;
  printf("Enter Five Digit Number: ");
  scanf("%d", &num);
  d5 = num %10;
  d4 = (num / 10) % 10;
  d3 = (num / 100) % 10;
  d2 = (num / 1000) % 10;
  d1 = (num / 10000);
  num = d5 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;
  printf("\nthe reverse : %d", num);
  return 0;
}
