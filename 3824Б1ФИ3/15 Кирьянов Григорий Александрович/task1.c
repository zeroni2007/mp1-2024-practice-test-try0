// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
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
    else {
        return (int)sum; // Преобразуем обратно в int
    }
}

#include <stdio.h>

int main() {
    setlocale(LC_ALL, "Rus");
    int a, b;

    printf("Введите первое целое число: ");
    scanf_s("%d", &a);

    printf("Введите второе целое число: ");
    scanf_s("%d", &b);

    int result = sum_of_two_numbers(a, b);
    printf("Сумма чисел: %d\n", result);

    return 0;
}
