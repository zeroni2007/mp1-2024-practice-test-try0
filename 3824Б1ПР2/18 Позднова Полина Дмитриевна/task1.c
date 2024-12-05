// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN

#include <stdio.h>
#include <limits.h>
int sum_of_two_numbers(int a, int b)
{
	int result;
	result = a + b;
	if (result >= INT_MAX) result = INT_MAX;
	if (result <= INT_MIN) result = INT_MIN;
	return result;
}
