#include <stdio.h>

int main(void) {
  int r;
  float pi =3.14,area,ci;
  printf("Please Enter the radius of the circle: ");
  scanf("%d", &r);
  area =pi*r*r;
  printf("The Area of the circle=%f", area);
  ci=2*pi*r;
  printf("The Volume of the circumference=%f", ci);
  return 0;
}
