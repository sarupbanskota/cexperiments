#include <stdio.h>

/* program that reverses strings line by line, taken from 
   standard input
*/

#define MAXLENGTH 1000

void reverse_print(char line[], int len){
  char temp;
  int i;
  for(i=0;i<len/2;i++){
    temp=line[i];
    line[i]=line[len-i-1];
    line[len-i-1]=temp;
  }
  for(i=0;i<=len;i++){ printf("%c", line[i]);}
  printf("\n");
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
  while( (len = getnextline(nextline)) > 0 ){
    reverse_print(nextline,len);
    printf("\n");
  }  
  return 0;
}
