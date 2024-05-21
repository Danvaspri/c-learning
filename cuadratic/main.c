#include <stdio.h>
#include <math.h>

int main(void){

  float a;
  float b;
  float c;
  printf("Enter the value of A: \n");
  scanf("%f",&a);
  printf("Enter the value of B: \n");
  scanf("%f",&b);
  printf("Enter the value of C: \n");
  scanf("%f",&c);
  float discriminant  = b*b-4*a*c;
  printf("%f \n", discriminant);
  float root1 = (-b + sqrt(discriminant))/(2*a);
  float root2 = (-b - sqrt(discriminant))/(2*a);

  float result1 = root1*root1*a + b*root1 + c;
  float result2 = root2*root2*a + b*root2 +c;
  
  printf("The solution for + is %f residue is %f \n",root1,result1);
  if(result1!=0){
    printf("But you may want to check that again.\n");
  }
  printf("The solution for - is %f residue is %f \n", root2, result2);
  if(result2!=0){
    printf("But yoy may want to check that again. \n");
  }
}
