#include <stdio.h>

void biggest3() 
{
    double num1, num2, num3;

    // Take three numbers as input from the user
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    // Compare the numbers to find the biggest
    if (num1 >= num2 && num1 >= num3) 
	{
        printf("%.2lf is the largest number.\n", num1);
    } 
    else if (num2 >= num1 && num2 >= num3)
	{
        printf("%.2lf is the largest number.\n", num2);
    } 
    else 
	{
        printf("%.2lf is the largest number.\n", num3);
    }
}

