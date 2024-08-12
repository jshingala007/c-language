#include <stdio.h>

void main() 
{
    FILE *even, *odd;
    int i;

    even = fopen("even.txt", "w");
    odd = fopen("odd.txt", "w");

    if (odd == NULL || even == NULL) {
        printf("Error opening file...");
        return;
    }

    for (i = 50; i <= 70; i++) {
        if (i % 2 == 0) {
            fprintf(even, "%d ", i);
        } else {
            fprintf(odd, "%d ", i);
        }
    }

    fclose(even);
    fclose(odd);
    
    printf("\nEven number printed in even...\n");
    printf("Odd number printed in odd...\n");
}

