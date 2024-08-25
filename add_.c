#include <stdio.h>
#include <unistd.h>
#include "operations.h"

// Function Definition and Implementation - add

/**
 * add - Adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: Sum of a and b
 */
int add(int a, int b)
{
	return (a + b);
}

// Main Function - Entry of the program

/**
 * main - Entry point, prints the sum, PID and PPID
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 5, b = 10;
	int sum = add(a, b);

	printf("Addition: %d + %d = %d\n", a, b, sum);
	printf("Process ID: %d\n", getpid());
	printf("Parent Process ID: %d\n", getppid());

	return (0);
}
