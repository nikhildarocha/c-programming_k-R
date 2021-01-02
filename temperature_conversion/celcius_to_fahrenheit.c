#include <stdio.h>

int main() 
{
  //int fahr, celcius; // integer arithmetic
  float fahr, celcius;
  int lower = 0, upper = 300, step = 20;
  
  celcius = lower;
  printf("Fahrenheit To Celcius\n");
  while(fahr <= upper) {
    fahr = (9.0*(celcius)/ 5.0)+32;
    printf("%3.0f\t%6.1f\n", celcius, fahr);
    celcius = celcius + step;
    }
  return 0;
}
