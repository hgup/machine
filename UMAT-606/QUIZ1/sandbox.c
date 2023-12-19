#include <stdio.h>

typedef struct {
  int hour, min, sec;
} time;

time add_hours(time a, int hour){
  a.hour += hour;
  return a;
}
time add_mins(time a, int min){
  a.min += min;
  return a;
}
time add_secs(time a, int sec){
  a.sec += sec;
  return a;
}

time add_time(time a, time b){
  time sum;
  sum.sec = a.sec + b.sec;
  if (sum.sec > 59){
    sum.sec -= 60;
    sum.min += 1;
  }
  sum.min = a.min + b.min;
  if (sum.min > 59){
    sum.min -= 60;
    sum.hour += 1;
  }
  sum.hour = a.hour + b.hour;
  if (sum.hour > 24){
    sum.hour -= 24;
    // we are not storing day
  }
  return sum;
}

time sub_time(time a, time b){
  time dif;
  dif.sec = a.sec - b.sec;
  // I changed the if to whiles
  while (dif.sec < 0){
    dif.sec += 60;
    dif.min -= 1;
  }
  dif.min = a.min - b.min;
  while (dif.min < 0){
    dif.min += 60;
    dif.hour -= 1;
  }
  dif.hour = a.hour - b.hour;
  while (dif.hour < 0){
    dif.hour += 24;
  }
  return dif;
}
time inputTime(time s){
  printf("H:");
  scanf("%d",&(s.hour));
  printf("M:");
  scanf("%d",&(s.min));
  printf("S:");
  scanf("%d",&(s.sec));
  return s;
}

void printTime(time s){
  printf("\n%d:%d:%d\n",s.hour, s.min, s.sec);
}

int main() {
  time a, b;
  // printf("TIME 1:\n");
  inputTime(a);
  // printf("TIME 2:\n");
  // inputTime(b);
  printTime(a);
  // printTime(b);
  // time sum = add_time(a,b);
  // printf("\nSum of the times: ");
  // printTime(sum);
  // time dif = sub_time(a,b);
  // printf("\nDif of the times: ");
  // printTime(dif);

}
