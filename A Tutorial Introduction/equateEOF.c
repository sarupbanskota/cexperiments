#include <stdio.h>

/* confirms that getchar() != EOF 
   is either 0 or 1 */

main(){
  printf("%d", (getchar() != EOF));
}
