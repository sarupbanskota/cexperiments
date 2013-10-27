#include <stdio.h>

/* Prints a vertical histogram of the lengths
   of words in standard input 
*/
#define MAXLENGTH 10
char HISTOGRAM[MAXLENGTH][MAXLENGTH];

int main(){
  char c;
  int i=MAXLENGTH-1;
  int k;
  int j=0;
  for(k=0;k<MAXLENGTH && (c=getchar())!=EOF;k++){
    if(c!='\n' &&  c!=' '){
      HISTOGRAM[i][j]='*';
      i--;
    }
    else{
      j++;
      i=MAXLENGTH-1;
    }
  }
  printf("\n");
  for(i=0;i<MAXLENGTH;i++){
    for(j=0;j<MAXLENGTH;j++){ printf("%c ", HISTOGRAM[i][j]); } printf("\n");
  }

  return 0;
}
