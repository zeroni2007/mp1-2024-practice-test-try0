// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
int sum_of_two_numbers(int a, int b)
{

    if (a > 0 && b > 0 && a > INT_MAX - b) {
        // Если оба числа положительные и сумма превышает INT_MAX
        return INT_MAX;
    }
    if (a < 0 && b < 0 && a < INT_MIN - b) {
        // Если оба числа отрицательные и сумма меньше INT_MIN
        return INT_MIN;
    }
    // В остальных случаях безопасно вернуть сумму
    return a + b;
  return 0;
}
