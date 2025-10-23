#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int n = 4; 
    int i, j;
    
    
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) 
            putchar(' '); 
        for (j = 1; j <= (2 * i - 1); j++) 
            putchar('*'); 
        putchar('\n'); 
    }

    for (i = n - 1; i >= 1; i--) {
        for (j = n; j > i; j--) 
            putchar(' ');
        for (j = 1; j <= (2 * i - 1); j++) 
            putchar('*');
        putchar('\n');
    }

   return 0;
}
