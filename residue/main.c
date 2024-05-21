#include <stdio.h>

int main(void){
  int denominator;
  int numerator;
  printf("Please enter a numerator: \n");
  scanf("%d",&numerator);
  printf("Please enter a deniminator: \n");
  scanf("%d",&denominator);
  int residue = numerator % denominator;
  if(residue > 0){
    printf("There is a residue!\n");
  } else {
    printf("There is no residue! \n");
  }
}
