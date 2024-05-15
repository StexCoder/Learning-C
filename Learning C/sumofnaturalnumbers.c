/*Write a C program to find the sum of natural numbers up to a given number.*/
#include <stdio.h>

int main() {
    int number, i;
    unsigned long long sum = 0; // Initialize sum to 0

    printf("Type your number: ");
    scanf("%d", &number);

    for (i = 1; i <= number; ++i) { // Changed loop condition to <=
        sum += i;
    }

    printf("Sum of natural numbers (from 1 to %d) is: %llu\n", number, sum); // Moved printf outside of the loop
    return 0;
}
