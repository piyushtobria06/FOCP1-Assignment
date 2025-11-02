#include <stdio.h>

int main() {
    int n, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) { // run n rows
       
        // Print left pattern (0,1 alternately)
        for (j = 0; j <= i; j++)
            printf("%d", j % 2);

        // Print spaces between patterns
        space = 2 * (n - i - 1);
        for (j = 0; j < space; j++)
            printf(" ");

        // Print right pattern (mirror of left)
        for (j = 0; j <= i; j++)
            printf("%d", j % 2);

        printf("\n");
    }

    return 0;
}
