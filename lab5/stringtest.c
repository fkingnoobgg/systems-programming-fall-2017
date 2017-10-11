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
    printf("Testing strcmp... ");
    char s3[] = "same string";
    char s4[] = "same string";
    if (my_strcmp(s3, s4) == 0) {
        printf("Passed!\n");
    } else {
        printf("Failed!\n");
    }

    /* =================== strncmp ============================ */
    printf("Testing strncmp... ");
    char s5[] = "comp until here ahfhe";
    char s6[] = "comp until here";
    size_t n     = 14;
    if (my_strncmp(s5, s6, n) == 0) {
        printf("Passed!\n");
    } else {
        printf("Failed!\n");
    }

    /* ===================== strchr ==========================*/
    printf("Testing strchr... ");
    char s7[] = "find the first e";
    char *eLoc = &s7[7];
    char *res = my_strchr(s7, 'e');
    if (*eLoc == *res) {
        printf("Passed!\n");
    } else {
        printf("Failed! Should be: %p Actually is: %p\n", (void *) eLoc,(void *) res);
    }

    /* ===================== strrchr ==========================*/
    // printf("Testing strrchr... ");
    // char s8[] = "find the last e";
    // char *eLoc = &s8[14];
    // char *res = my_strrchr(s8, 'e');
    // if (*eLoc == *res) {
    //     printf("Passed!\n");
    // } else {
    //     printf("Failed!\n");
    // }
    printf("Testing maximum... ");
    int values[] = {1, 2, 3, 0, 1, 1};
    int k        = 6;
    int *large_value_p = maximum(values, k);
    if (*large_value_p == values[2]) {
        printf("Passed!\n");
    } else {
        printf("Failed! Should be: %p Actually is: %p\n", (void *) &values[2], (void *) large_value_p);
    }
}
