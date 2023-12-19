typedef struct {
  int year, month, day;
} date;

date add_years(date, int);
date add_months(date, int);
int isLeap(date);
date add_days(date, int);
date inputDate();
void printDate(date);
date add_date(date, date);
date new_date(int, int, int);

