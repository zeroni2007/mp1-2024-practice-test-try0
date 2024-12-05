#include <stdio.h>
#include <limits.h>
#include <locale.h>

int sum_of_two_numbers(int a, int b) {
    long long sum = (long long)a + b; 
    if (sum >= INT_MAX) {
        return INT_MAX;
    }
    else if (sum <= INT_MIN) {
        return INT_MIN;
    }
    return (int)sum; 
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
