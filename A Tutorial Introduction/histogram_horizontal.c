#include <stdio.h>

/* Prints histograms of lengths of words in 
input */

int main(){
  int count;
  char c;
  c=getchar();
  while(c!=EOF){
    if(c==' ' || c== '\n'){
      while(count--){
        printf("*");
      }
      printf("\n");
    }
    else count+=1;
    c=getchar();
  }
  return 0;
}
