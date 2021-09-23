#include <stdio.h>
int main(void) {
  int add, sub, div, mul, mod, a, b;
  printf("Enter the first number: ");
  scanf("%d",&a);
  printf("Enter the first number: ");
  scanf("%d",&b);
  add=a+b;
  sub=a-b;
  div=a/b;
  mul=a*b;
  mod=a%b;
  printf("The addition of two number is %d\n",add);
  printf("The subtraction of two number is %d\n",sub);
  printf("The division of two number is %d\n",div);
  printf("The multiplication of two number is %d\n",mul);
  printf("The modulu of two number is %d\n",mod);
  return 0;
}
