#include <stdio.h>

/* Prints the input out to standard output,
   one word per line (quite rough).
*/

# define IN 1
# define OUT 0

main(){
  char c;
  int STATE=OUT;
  c = getchar();
  while (c != EOF){
    if (c == ' ' ||  c == '\n' ||  c == '\t') STATE=OUT;
    else if (STATE == OUT) { 
       STATE=IN; 
       printf("\n");
    }
    if (STATE == IN) putchar(c);
    c = getchar(); 
  }
}
