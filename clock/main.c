#include <stdio.h>

int main(void){
  float input_seconds;
  printf("Enter the amount of seconds: \n");
  scanf("%f",&input_seconds);
  
  float days = input_seconds/86400;
  int days_int = (int)days;
  float days_left = (days-days_int)*86400;
  
  float hours = days_left/3600;
  int hours_int = (int)hours;
  float hours_left = (hours-hours_int)*3600;

  float minutes = hours_left/60;
  int minutes_int = (int)minutes;
  float minutes_left = (minutes-minutes_int)*60;
  

  int seconds_int = (int)minutes_left;



  printf("input: %f seconds.\n",input_seconds);
  printf("days: %d, hours: %d, minutes: %d, seconds: %d",days_int,hours_int,minutes_int,seconds_int);

}
