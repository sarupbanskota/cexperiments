#include <stdio.h>

/* Program that counts blanks, tabs and newlines,
   and reports the number to standard output 
*/

main(){
  int character, bc, tc, nc;
  bc=tc=nc = 0;
  character = getchar();
  while (character != EOF){
    if (character == ' ') ++bc;
    if (character == '\t') ++tc;
    if (character == '\n') ++nc;
    character = getchar(); 
  }
  printf("%3d blanks \n%3d tabs \n%3d newlines \n", bc, tc, nc);
}
