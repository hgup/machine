#include <stdio.h>

typedef struct {
  int hour, min, sec;
} time;

time add_hours(time a, int hour){
  a.hour += hour;
  while (a.hour > 24){
    a.hour -= 24;
    // we are not storing day
  }
  return a;
}
time add_mins(time a, int min){
  a.min += min;
  while (a.min > 59){
    a.min -= 60;
    a.hour += 1;
  }
  return a;
}
time add_secs(time a, int sec){
  a.sec += sec;
  while (a.sec > 59){
    a.sec -= 60;
    a.min += 1;
  }
  return a;
}

time add_time(time a, time b){
  time sum;
  sum = add_hours(a,b.hour);
  sum = add_mins(sum,b.min);
  sum = add_secs(sum,b.sec);
  return sum;
}

time sub_hours(time a, int hour){
  a.hour += hour;
  while (a.hour < 0){
    a.hour += 24;
  }
  return a;
}
time sub_mins(time a, int min){
  a.min += min;
  while (a.min < 0){
    a.min += 60;
    a.hour -= 1;
  }
  return a;
}
time sub_secs(time a, int sec){
  a.sec += sec;
  while (a.sec < 0){
    a.sec += 60;
    a.min -= 1;
  }
  return a;
}

time sub_time(time a, time b){
  time dif;
  dif = add_secs(a,b.sec);
  dif = add_mins(dif,b.min);
  dif = sub_hours(dif,b.hour);
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

// void printTime(time s){
//   printf("\n%d:%d:%d\n",s.hour, s.min, s.sec);
// }
//
// int main() {
//   time a, b;
//   printf("TIME 1:\n");
//   a = inputTime(a);
//   printf("TIME 2:\n");
//   inputTime(b);
//   printTime(a);
//   printTime(b);
//   time sum = add_time(a,b);
//   printf("\nSum of the times: ");
//   printTime(sum);
//   time dif = sub_time(a,b);
//   printf("\nDif of the times: ");
//   printTime(dif);
//
// }
//
//
