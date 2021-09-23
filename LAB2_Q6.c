#include <stdio.h>
int main(void)
{
  int a,b,c;
  printf("Please enter a side lenght: ");
  scanf("%d", &a);
  printf("Please enter another side lenght: ");
  scanf("%d", &b);
  printf("Please enter another side lenght: ");
  scanf("%d", &c);
  if((a*a == b*b + c*c)||(b*b == a*a + c*c)||(c*c == a*a + b*b)){
    printf("This is a right-angled triangle!");
  }else{
    printf("This is not a right-angled triangle");
  }
  return 0;
  }
