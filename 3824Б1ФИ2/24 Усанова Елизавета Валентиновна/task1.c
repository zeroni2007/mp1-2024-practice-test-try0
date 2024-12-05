#include <stdio.h>
#include <limits.h>

int proga(int a, int b) {
    long long sum = (long long)a + (long long)b; 

    if (sum > INT_MAX) {
        return INT_MAX; 
    }
    else if (sum < INT_MIN) {
        return INT_MIN; 
    }
    else {
        return (int)sum; 
    }
}
