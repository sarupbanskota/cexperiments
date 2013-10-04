#include <stdio.h>

main(){
  float c, f;
  int lower, step, upper;
  
  lower = 0;
  step = 20;
  upper = 300;

  printf("Program that prints a list of fahr to celcius converts!\n");
  
  while ( f <= upper ){
    c = (f - 32) * 5/9;
    printf("%3.0f \t %6.1f \n", f, c);
    f = f + step;
  }
  
}
