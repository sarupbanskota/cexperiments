#include <stdio.h>

/* Program that prints output to standard output 
   after stripping off extra blank spaces
*/

main(){
  char back, c;
  c = getchar();
  while (c != EOF){
    putchar(c);
    back = c;
    c = getchar();
    if (c == ' ' && back == ' ') {
      c = getchar();
      while (c == ' ') c = getchar();
      back = ' ';
    }
  }
} 
