#include <stdio.h>

/* печать таблицы температур по Фаренгейту и Цельсию для
fahr = 0, 20 ... 300; вариант с плавающей точкой */

float transform(float f, float c);

int main(int argc, char const *argv[]) {

  float fahr, celsius;
  int lower, upper, step;
  lower = 0; /* нижняя граница таблицы температур */
  upper = 300; /* верхняя граница */
  step = 10; /* шаг */
  celsius = lower;

  printf("%6s %6s\n", "Celsiu", "Farenh");

  while (celsius <= upper) {
    //fahr = (celsius / (5.0/9.0)) + 32.0;
    printf ("%6.0f %6.1f\n", celsius, transform(fahr, celsius));
    celsius = celsius + step;
  }

  return 0;
}


float transform(float f, float c){
    f = (c / (5.0/9.0)) + 32.0;
    return f;
}