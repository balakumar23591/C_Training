#include <stdio.h>

// area of the triangle
int main() {
  float b, h, area;

  printf("Enter the base: ");
  scanf("%f", &b);
  printf("Enter the height: ");
  scanf("%f", &h);

  area = 0.5 * b * h;

  printf("Area of the triangle: %f\n", area);

  return 0;
}
