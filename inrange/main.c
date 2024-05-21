#include <stdio.h>

int main(void){
  int input;
  printf("Please enter a number: \n");
  scanf("%d",&input);
  switch(input) {
    case 1 ... 100: 
      printf("Your number is between 1-100! \n"); 
      break;
    case 101 ... 200:
      printf("Your number is between 101-200! \n");
      break;
    case 201 ... 300:
      printf("Your number is between 201-300! \n");
      break;
    case 301 ... 400:
      printf("Your number is between 301-400! \n");
      break;
    case 401 ... 500:
      printf("Your number is between 401-500! \n");
      break;
    default: 
      printf("Your number is not in range. \n");
      break;
  }
}
