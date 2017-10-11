#include "pointers.h"

int main(int argc, char *argv[]) {
    printf("Testing strcat... ");
    char s1[100] = "im ";
    char s2[] = "string";
    char answer[] = "im string";
    my_strcat(s1, s2);
    if (strcmp(answer, s1) == 0) {
        printf("Passed!\n");
    } else {
        printf("Expected: %s But was: %s\n", answer, s1);
    }

    /* ====================== strcmp =========================== */
    printf("Testing strcmp...\n");
    
}
