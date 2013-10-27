#include <stdio.h>

/* program that prints all input lines
  greater than 80 characters

  while(there's another line)
      get next line
      if it is over 80 chars, print it.
*/

#define MAXLENGTH 1000

int getnextline(char line[]){
  int i;
  char c;
  for(i=0;(i<MAXLENGTH-1) && ((c=getchar())!=EOF) && (c!='\n');i++){
    line[i]=c;
  }
  line[i]='\0';
  return i;
}

int main(){
  int i,len;
  char nextline[MAXLENGTH];
  while( (len = getnextline(nextline)) > 80 ){
    for(i=0;i<len;i++){
      printf("%c", nextline[i]);
    }
    printf("\n");
  }  
  return 0;
}
