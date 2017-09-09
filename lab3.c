#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
// Compile this program with:
//      cc -std=c99 -Wall -Werror -pedantic -o lab3 lab3.c


//  Execution of the whole program begins at the main function
int my_strlen(char* str) {
  int len = 0;
  while (str[len] != '\0') {
    len++;
  }
  return len;
}

int number_of_vowels(char* str) {
  int num_vowels = 0;
  char vowels[] = {'a', 'e', 'i', 'o', 'u'};
  for (int i = 0; i < strlen(str); i++) {
    for (int j = 0; j < strlen(vowels); j++) {
      if (str[i] == vowels[j])
        num_vowels++;
    }
  }
  return num_vowels;
}

bool is_safe(char* str) {
  bool safe = false;
  int isUpperCount = 0;
  int isLowerCount = 0;
  int isDigitCount = 0;

  for (int i = 0; i < strlen(str); i++) {
    if (isupper(str[i])) {
      isUpperCount++;
    }
    else if (islower(str[i])) {
      isLowerCount++;
    }
    else if (isdigit(str[i])) {
      isDigitCount++;
    }
  }

  if (isUpperCount >= 2 && isLowerCount >= 2 && isDigitCount >= 2) {
    safe = true;
  }
  return safe;
}

/*
  returns - 1 if the first string is less than second string
  returns 0 if the the strings are equal
  returns 1 if the first string is greater than the second string
*/

int my_strcmp(char* str1, char* str2) {
  bool higher = true;
  bool isEqual = true;
  if (my_strlen(str1) != my_strlen(str2)) {
    isEqual = false;
  }
  for (int i = 0; i < strlen(str1); i++) {
    if (str1[i] != str2[i]) {
      if (str1[i] > str2[i]) {
        higher = false;
        isEqual = false;
      }
    }
  }

  if (isEqual) {
    return 0;
  }
  else if (higher) {
    return 1;
  }
  else {
    return -1;
  }
}

bool is_palindrome(char* str) {
  int end = strlen(str) - 1;
  int half = strlen(str)/2;
  for (int i = 0; i < half; i++) {
    if (str[i] != str[end-i]) {
      return false;
    }
  }
  return true;
}

// Using the Luhn algorithm
bool valid_card(char* cardnum) {
  int s1 = 0;
  int s2 = 0;
  int cardpos = strlen(cardnum) - 2;
  int even = true;
  if (isdigit(cardnum[cardpos+1])) {
    s1 = atoi(&cardnum[cardpos+1]);
  }
  while (cardpos >= 0) {
    if (isdigit(cardnum[cardpos]))
    {
      int num = cardnum[cardpos] - '0';
      if (even) {
        num = num * 2;
        while(num)
        {
          s2 = s2 + num % 10;
          num /= 10;
        }
      }
      else {
        s1 = s1 + num;
      }
    }

    even = !even;
    cardpos--;
  }

  if (((s1 + s2) % 10) == 0) {
    return true;
  }
  else {
    return false;
  }
}

int main(int argc, char *argv[])
{
  if (strcmp(argv[1],"strlen") == 0) {
    printf("Length is: %i\n",my_strlen(argv[2]));
  }
  else if (strcmp(argv[1], "numvowels") == 0) {
    printf("Number of vowels is: %i\n", number_of_vowels(argv[2]));
  }
  else if (strcmp(argv[1], "safe") == 0) {
    printf("String is safe: %s\n", is_safe(argv[2]) ? "true" : "false");
  }
  else if (strcmp(argv[1], "strcmp") == 0) {
    printf("The strings are same: %i\n", my_strcmp(argv[2], argv[3]));
  }
  else if (strcmp(argv[1], "palindrome") == 0) {
    printf("String is palindrome: %s\n", is_palindrome(argv[2]) ? "true" : "false");
  }
  else if (strcmp(argv[1], "validcard") == 0) {
    printf("Card is valid: %s\n", valid_card(argv[2]) ? "true" : "false");
  }
}
