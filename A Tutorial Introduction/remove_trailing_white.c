#include <stdio.h>

/* program that removes all trailing 
   blankspaces and tabs off standard input, line by line
*/

#define MAXLENGTH 1000

void remove_trailing_whitespaces(char line[], int length){
  int i;
  for(i=length-1;i>=0;i--){
    if(line[i]== ' '  && line[i]== '\t' ) --length; 
    else if(line[i]!='\0' ) break;
  }
  line[length]='\0';
  for(i=0;i<length;i++){ printf("%c",line[i]); }
}

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
  while( (len = getnextline(nextline)) > 0){
    remove_trailing_whitespaces(nextline,len);
    printf("\n");
  }  
  return 0;
}
