#include <stdio.h>

/* Program that prints output to standard output 
   after stripping off extra blank spaces
*/
#define INBLANK  1
#define OUTBLANK 0

main(){
  char c;
  int STATE=OUTBLANK;
  c = getchar();
  while (c != EOF){
    if      (STATE == INBLANK && c == ' ') ;   /* one space to another - do nothing */
    else if (STATE == INBLANK && c != ' ') {   /* moving from space to word */
      STATE=OUTBLANK;
      putchar(c);
    }
    else if (STATE == OUTBLANK && c == ' ') {  /* first space after word */
      STATE=INBLANK;
      putchar(c);
    }
    else putchar(c);                           /* inside a word */
    c = getchar();
  }
} 
