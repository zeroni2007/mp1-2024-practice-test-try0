// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
double max_of_two_numbers(double a, double b) { 
  if (a > b) { 
    return a; 
  } else if (a < b) { 
    return b; 
  } else { 
    return 0.0; // Возвращаем 0.0, если числа равны 
  } 
}
