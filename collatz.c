#include <cs50.h>
#include <stdio.h>

// Function Prototype
int collatz(int n);

int main(void)
{
    int number = get_int("Enter a Number: ");

    printf("Steps: %i\n", collatz(number));
}

int collatz(int n)
{
    // Base Case
    if (n == 1)
        return 0;
    // Even Number
    else if ((n%2) == 0)
        return 1 + collatz(n/2);
    // Odd Number
    else
        return 1 + collatz(3*n + 1);
}
