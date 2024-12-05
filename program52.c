/* design the pattern
    *
   ***
  *****
 *******
*********

 */
#include <stdio.h>

int main() {
    int n = 5; // Number of rows

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = n - i; j > 0; j--) {
            printf(" ");
        }
        // Print asterisks
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
