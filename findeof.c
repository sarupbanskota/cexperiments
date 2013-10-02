/* 
   This program prints the value of 
   EOF. We take an int input and putchar.
*/
   
#include <stdio.h>

main(){
  int input;
  while ((input = getchar()) != EOF){
    ;
  }
  printf("%d", input);
}


