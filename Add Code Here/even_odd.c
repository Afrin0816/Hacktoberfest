#include <stdio.h>

int main()
{
    int num; // Variable to store the number entered by the user

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num); // Read input from the user

    // Check if the number is even or odd using modulus operator
    if (num % 2 == 0)
    {
        printf("%d is an Even number.\n", num);
    }
    else
    {
        printf("%d is an Odd number.\n", num);
    }

    return 0; // End of the program
}
