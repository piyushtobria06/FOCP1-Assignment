#include <stdio.h>

int main() {
    int num1, num2, i, largest = 0;

    printf("Enter the 1st number: ");
    scanf("%d", &num1);

    printf("Enter the 2nd number: ");
    scanf("%d", &num2);

    int min;
    if (num1 < num2)
    {min = num1;}
    else{min = num2;}


    for (i = 1; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            largest = i; 
        }
    }

    printf("HCF of %d and %d is %d", num1, num2, largest);
    return 0;
}
