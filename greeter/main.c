#include <stdio.h>

int main(int argc, char* argv[]){
  if(argc!=3){
    printf("Usage: ./greeter/main Firstname Lastname \n");
    return 0;  
  }
  printf("Hello, %s %s! \n",argv[1],argv[2]);
 }
