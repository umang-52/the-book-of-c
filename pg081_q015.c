#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write program that reads the month and first day of the month (1 for Monday, 2 for Tuesday, and so on)
  from the user and prints the number of Sundays in that month.
  Input: two integers on a single line separated by one space, e.g. 4 6
          First integer is month, 1 for Jan, 2 for Feb, ... 12 for Jan
          Second integer is day of week, 1 for Monday, 2 for Tuesday ...
  Output: One integer showing number of sundays in that month. No newline to be printed
          In case of invalid input, print -1 as output */
 int week, month;
  scanf("%d%d",&week,&month);
  switch(week)
  {
    case 1:
      printf("Monday");
    case 2:
      printf("Tuesday");
    case 3:
      printf("Wednesday");
    case 4:
      printf("Thursday");
    case 5:
      printf("Friday");
    case 6:
      printf("Saturday");
    case 7:  
      printf("Sunday");
      default :
      printf("-1");
        
  return 0
}
