#include <stdio.h>

int main(void) {
  float r, area, volume;
  float h = 1.0f;
  printf("Please Enter the radius of the Sphere: ");
  scanf("%f", &r);
  area = 4*3.14*r*r;
  volume = (4/3)*3.14*r*r*r;
  printf("The Area of the Sphere = %f\n", area);
  printf("The Volume of the Sphere = %f\n", volume);
  return 0;
}
