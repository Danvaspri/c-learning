#include <stdio.h>
#include <string.h>
#include  <stdbool.h>
int main(void){
  float scores[10];
  int counter = 0;
  bool keep_playing = true;

  while(keep_playing && counter<8){
    float score;
    
    printf("Enter a test score:\n");
    scanf("%f",&score);
    scores[counter] = score;
    char keep_playing_ans[] = "Y";
    printf("Would yoy like to continue? Y/N \n");
    scanf("%s",&keep_playing_ans);
    
    int want_to_keep = strcmp("Y",keep_playing_ans);
    if(want_to_keep!=0){

      keep_playing=false;
    }

    counter++;
  }
  float sum;
  for(int i = 0;i<counter;i++){
   
    sum+=scores[i];
  }
  float result = sum/(counter);
  printf("The average is %f",result);
}
