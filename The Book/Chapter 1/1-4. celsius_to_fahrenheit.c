#include <stdio.h>

int main(void) {
  float fahr;
  float celsius;
  int lower;
  int upper;
  int step;

  lower = 0;
  upper = 300;
  step = 20;
  celsius = lower;
  printf("Cel\tFahr\n");
  while (celsius <= upper) {
    fahr = (celsius * (9.0 / 5.0) + 32.0);
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius += step;
  }
  return (0);
}
