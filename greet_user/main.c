#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main(){

  char *first_name = malloc(1024);
  printf("Enter your first name: \n");
  scanf("%1023s",first_name);
  realloc(first_name,strlen(first_name)+1);
  char *last_name = malloc(1024);
printf("Enter yout last name: \n");
  scanf("%1023s",last_name);
  realloc(last_name, strlen(last_name)+1);
  printf("%s", first_name);
  printf("%s",last_name); 

}
