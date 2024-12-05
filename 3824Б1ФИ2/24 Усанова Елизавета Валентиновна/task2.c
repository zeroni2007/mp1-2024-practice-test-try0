#include <limits.h>
#include <stdio.h>

unsigned int proga(unsigned int a, unsigned int b) {
    if (a == 0 || b == 0) return 0; 

    if (a > UINT_MAX / b) { 
        return UINT_MAX;
    }
    else {
        return a * b;
    }
}
