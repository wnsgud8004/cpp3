#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; 

    for (i = 2; i <= rows; i++) {       
        for (j = 1; j <= i; j++) {       
            printf("%d ", j);
        }
        printf("\n"); 
    }

    return 0;
}