#include <stdio.h>  
int main(void){
  int array_of_ints[10];

  printf("The array has %lu elements", sizeof(array_of_ints)/sizeof(array_of_ints[0]));

}
