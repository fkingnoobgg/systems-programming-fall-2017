#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define NROW  6
#define NCOL  7

int main(int argc, char *argv[])
{
  int max_days = 31;
  int day1 = 2;
  int day = 1 - day1;
  printf("    August 2017\n");
  printf("Su Mo Tu We Th Fr Sa\n");
  for (int i  = 0; i < NROW; i++) {
    for (int j = 0; j < NCOL; j++) {
      if (day < 1 || day > max_days)
      {
        printf("   ");
      } else {
        printf("%2i ", day);
      }
      day++;
    }
    printf("\n");
  }

  system("cal 8 2017");
}
