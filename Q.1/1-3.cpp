#include <stdio.h>

int main() {
    int i, j, k;
    int rows = 5; 

    for (i = 1; i <= rows; i++) {          
        for (j = 1; j <= rows - i; j++) {  
            printf("  ");  
        }
        for (k = i; k >= 1; k--) {         
            printf("%d ", k);
        }
        printf("\n"); 
    }

    return 0;
}
