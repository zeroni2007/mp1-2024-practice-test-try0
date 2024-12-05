#include <stdio.h>
#include <limits.h>
#include <locale.h>

int sum_of_two_numbers(int a, int b) {
    if (a > 0 && b > 0 && a > INT_MAX - b) {
        return INT_MAX; 
    }
    if (a < 0 && b < 0 && a < INT_MIN - b) {
        return INT_MIN; 
    }

    return a + b; 
}

int main() {
    setlocale(LC_ALL, "Rus");
    int a, b, sum;
    printf("Введите два целых числа: ");
    scanf_s("%d %d", &a, &b);
    int result = sum_of_two_numbers(a, b);
    printf("Сумма: %d\n", result);
    return 0;
}
