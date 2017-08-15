#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define NROW  6
#define NCOL  7

int maxNumFromArray(int numArr[], int len)
{
  int max = numArr[0];
  for (int i = 1; i < len; i++) {
    if (numArr[i] > max) {
      max = numArr[i];
    }
  }
  return max;
}

int main(int argc, char *argv[])
{
  if (strcmp(argv[1], "max") == 0) {
    int numArr[argc-2];
    for (int i = 0; i < argc-2; i++) {
      numArr[i] = atoi(argv[i+2]);
    }
    int max = maxNumFromArray(numArr, argc-2);
    printf("Max num from given numbers is %i\n", max);
  }
}
