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
