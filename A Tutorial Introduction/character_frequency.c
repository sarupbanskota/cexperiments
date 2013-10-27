#include <stdio.h>

/* Prints a histogram of frequencies of characters */

int main(){
  int frequency[26]={0};
  char c;
  int num;
  c=getchar();
  while(c!=EOF){
    num = c-'a';
    if(num >=0 && num < 26){ frequency[num]+=1; }
    c=getchar();
  }
  for(num=0;num<26;num++){
    printf("%c  ", num+'a');
    while(frequency[num]--){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
