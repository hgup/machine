#include <stdio.h>
#include "dateTypes.h"


date add_years(date a, int year){
  a.year += year;
    // we are not storing day
  return a;
}

date add_months(date a, int month){
  a.month += month;
  while (a.month > 12){
    a.month -= 12;
    a = add_years(a,1);
  }
  return a;
}

int isLeap(date a){
  if (a.year % 1000 == 0)
    if (a.year % 400 == 0) return 1;
    else return 0;
  else if (a.year % 4 == 0) return 1;
  else return 0;
}

date add_days(date a, int day){
  a.day += day;
  int check_date;
  int correct = 0;
  while (!correct){
    if (isLeap(a)) check_date = 29; else check_date = 28;
    switch (a.month) {
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
        if(a.day > 31){
          a.day -= 31;
          a = add_months(a, 1);
        }else {
          correct = 1;
          break;
        }
      case 2:
        if(a.day > check_date){
          a.day -= check_date;
          a = add_months(a, 1);
        }else {
          correct = 1;
          break;
        }
      case 4:
      case 6:
      case 9:
      case 11:
        if(a.day > 30){
          a.day -= 30;
          a = add_months(a, 1);
        }else {
          correct = 1;
          break;
        }
      default:
        break;
    }
  }
  return a;
}
date inputDate(){
  date d;
  printf("Enter date int this format: YYYY-MM-DD:\n");
  scanf("%d-%d-%d",&d.year,&d.month, &d.day);
  return d;
}

void printDate(date d){
  printf("DATE: %4d-%2d-%2d\n",d.year, d.month, d.day);
}


date add_date(date a, date b){
  date sum;
  sum = add_years(a,b.year);
  sum = add_months(sum,b.month);
  sum = add_days(sum,b.day);
  return sum;
}

date new_date(int y, int m, int d){
  date da;
  da.year = y;
  da.month = m;
  da.day = d;
  return da;
}

// int main(){
//   date d;
//   // printf("Given Date: ");
//   // d = new_date(2024, 2, 27);
//   // printDate(d);
//   printf("Enter Today's Date: ");
//   d = inputDate();
//   int n;
//   printf("Enter # of days to add: ");
//   scanf("%d",&n);
//   date tomorrow = add_days(d,n);
//   printf("Next date: ");
//   printDate(tomorrow);
//   
// }
//

