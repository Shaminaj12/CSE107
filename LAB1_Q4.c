#include <stdio.h>

int main(void) {
  float r, area, volume;
  float h = 1.0f;
  printf("Please Enter the radius of the Cylinder: ");
  scanf("%f", &r);
  area = 2*3.14*r*h + 2*3.14*r*r;
  volume = 3.14*r*r*h;
  printf("The Area of the Cylinder = %f\n", area);
  printf("The Volume of the Cylinder = %f\n", volume);
  return 0;
}
