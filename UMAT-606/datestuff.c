typedef struct {
  int year, month, day;
} date;

time add_days(time a, int hour){
  a.hour += hour;
  while (a.hour > 24){
    a.hour -= 24;
    // we are not storing day
  }
  return a;
}
time add_months(time a, int min){
  a.min += min;
  while (a.min > 59){
    a.min -= 60;
    a.hour += 1;
  }
  return a;
}
time add_days(time a, int sec){
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

