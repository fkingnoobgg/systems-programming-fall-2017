#include "pointers.h"

int *maximum(int *values, int n) {
    int *p_max = values;
    while (n > 0) {
        if (*values > *p_max) {
            p_max = values;
        }
        --n;
        ++values;
    }
    return p_max;
}
