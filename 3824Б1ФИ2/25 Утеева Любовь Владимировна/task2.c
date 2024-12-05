#include <stdio.h>
#include <limits.h>
#include <locale.h>

unsigned int product_of_two_numbers(unsigned int a, unsigned int b) {
    if (a == 0 || b == 0) return 0;
    if (a > UINT_MAX / b) { 
        return UINT_MAX;
    }
    else {
        return a * b;
    }
}

int main() {
    setlocale(LC_ALL, "Rus");
    unsigned int a, b;
    printf("Введите два натуральных числа (a и b): ");
    scanf_s("%u %u", &a, &b);
    unsigned int result = product_of_two_numbers(a, b);
    printf("Произведение a * b = %u\n", result);
    return 0;
}
