#include "pointers.h"

/*
 * appends s2 to s1
 */
char *my_strcat(char *s1, char *s2) {
    char * orig = s1;
    // move address to end of s1 to append
    while (*s1 != '\0') {
        s1++;
    }

    while (*s2 != '\0') {
        *s1++ = *s2++;
    }

    // add null terminator
    ++s1;
    *s1 = '\0';
    return orig;
}

/*
 * returns 0 if s1 and s2 equal
 * returns 1 if s1 > s2
 * returns -1 if s1 < s2
 */
int my_strcmp(char *s1, char *s2) {
    while (*s1 != '\0') {
        if (*s1 > *s2) {
            return 1;
        } else if (*s1 < *s2) {
            return -1;
        }
        s1++;
        s2++;
    }
    return 0;
}

/*
 * same as strcmp until nth char
 */
 int my_strncmp(char *s1, char *s2, size_t n) {
     while(n > 0 && s1 != '\0' && *s1 == *s2) {
         ++s1;
         ++s2;
         --n;
     }
     return (*s2 - *s1);
 }

/*
 * finds first occurance of char
 * returns address of char
 */
 char *my_strchr(char *s1, int c) {
     while (*s1 != '\0') {
         if (*s1 == c) {
             return s1;
         }
         s1++;
     }
     return 0;
 }
