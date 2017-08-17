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
  else if (strcmp(argv[1], "ass1") == 0) {
    int nspace = 4;
    int nass = 1;
    for (int i = 0; i < 5; i++)
    {
      for (int j = 0; j < nass; j++) {
        printf("*");
      }

      for (int j = 0; j < nspace; j++) {
        printf(" ");
      }
      nspace--;
      nass++;
      printf("\n");
    }
  }
  else if (strcmp(argv[1], "ass4") == 0) {
    int lspace = 4;
    int rspace = 4;

    int nass = 1;
    for (int i = 0; i < 5; i++)
    {
      for (int j = 0; j < lspace; j++) {
        printf(" ");
      }

      for (int j = 0; j < nass; j++) {
        printf("*");
      }

      for (int j = 0; j < rspace; j++) {
        printf(" ");
      }

      lspace--;
      rspace--;
      nass++;
      nass++;

      printf("\n");
    }
  }
  else if (strcmp(argv[1], "ordinal") == 0) {
    for (int i = 2; i < argc; i++) {
      if (argv[i][0] - '0' == 1 && strlen(argv[i]) == 2) {
        printf("%sth\n", argv[i]);
      } else {
        int numToEval;
        if (strlen(argv[i]) == 2) {
          numToEval = argv[i][1];
        } else {
          numToEval = argv[i][0];
        }
        if (numToEval - '0' == 1) {
          printf("%sst\n", argv[i]);
        }
        else if (numToEval - '0' == 2) {
          printf("%snd\n", argv[i]);
        }
        else if (numToEval - '0' == 3) {
          printf("%srd\n", argv[i]);
        } else {
          printf("%sth\n", argv[i]);
        }
      }
    }
  }
}
