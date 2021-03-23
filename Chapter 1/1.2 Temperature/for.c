#include "stdio.h"

int main(int argc, char const *argv[]) {

  int Farenheit;
  printf("%6s %6s\n", "Farenh", "Celsiu");

  for(Farenheit = 300; Farenheit >= 0; Farenheit = Farenheit - 25){
    printf("%6d %6.1f\n", Farenheit, (5.0/9.0) * (Farenheit - 32.0));
  }

  return 0;
}
