#include <stdio.h>

void factorial() {
    int num;
    // Using unsigned long long to handle larger factorial results
    unsigned long long factorial = 1; 

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Factorial is not defined for negative numbers
    if (num < 0) {
        printf("Error: Factorial of a negative number does not exist.\n");
    } else {
        for (int i = 1; i <= num; ++i) {
            factorial *= i; // Multiplies factorial by the loop counter
        }
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    //return 0;
}

