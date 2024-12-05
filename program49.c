/* design the pattern 
*****
 ****
  ***
   **
    *
*/

#include <stdio.h>

int main() {
    for (int i = 5; i > 0; i--) {
        
        for (int j = 5 - i; j > 0; j--) {
            printf(" ");
        }
       
        for (int k = 0; k < i; k++) {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}

