#include <stdio.h>
#define PIE 3.14
int main(void){
  float radius;
  printf("Enter the radius of your circle");
  scanf("%f",&radius);
  float area;
  area = PIE * (radius*radius);
  printf("the area of the circle with radius %f is %f",radius,area);
}
