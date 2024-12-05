#include <limits.h>
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
    if (a != 0 && b > UINT_MAX / a) {
        return UINT_MAX; // Переполнение, возвращаем максимальное значение
    }
    // Умножение безопасно
    return a * b;
  return 0;
}
