#include <stdio.h>

/* Prints input to standard output, indicating 
   escape characters wherever they occur. 
*/

main(){
  char c;
  c = getchar();
  while (c != EOF){
    if (c == '\t')      printf("\\t");
    else if (c == '\b') printf("\\b");
    else if (c == '\\') printf("\\");
    else putchar(c);
    c = getchar();  
  } 
}
