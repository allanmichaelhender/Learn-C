#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year) {
  if (year % 4 != 0) {
    return false;
  } else if (year % 100 != 0) {
    return true;
  } else if ( year % 400 != 0) {
    return false;
  } else {return true;}
}



int main() {
  int year;
  printf("Please enter year\n");
  scanf("%i", &year);
  if (is_leap_year(year)) {
    printf("Leap Year\n");
  } else {printf("Not Leap Year\n");}

}