#include <stdio.h>
#include <unistd.h>
#include "operations.h"

//Function Declaration

/**
 * subtract - Subtracts two integers
 * @a first integer
 * @b second integer
 *
 * Return: Difference between and b
 */
int subtract(int a, int b)
{
	return (a - b);
}


// Function Implementation

/**
 * main - Entry point, prints difference and PID
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 10, b = 7;
	int diff = subtract(a, b);

	printf("Difference: %d - %d = %d\n", a, b, diff);
	printf("Process ID: %d\n", getpid());

	return (0);
}
