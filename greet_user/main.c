#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main(){

  char *first_name;
  printf("Enter your first name: \n");
  scanf("%ms",&first_name);
  char *last_name;
  printf("Enter yout last name: \n");
  scanf("%ms",last_name);
  printf("Hello %s %s!, have an excelent day :) \n", first_name, last_name);
  free(first);
  free(last);

}
