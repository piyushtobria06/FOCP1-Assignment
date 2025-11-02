#include <stdio.h>

int main() {
    int num;

    printf("Enter the number of terms in array: ");
    scanf("%d", &num);

    int number[num];

    // Input array elements
    for (int i = 0; i < num; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number[i]);
    }

    int count = 0; // to count prime numbers

    // Check for primes
    for (int i = 0; i < num; i++) {
        int isPrime = 1; // assume number is prime
        if (number[i] <= 1)
            isPrime = 0; // 0 and 1 are not prime
        else {
            for (int j = 2; j <= number[i] / 2; j++) {
                if (number[i] % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
        if (isPrime)
            count++;
    }

    printf("Number of prime terms = %d\n", count);

    return 0;
}
