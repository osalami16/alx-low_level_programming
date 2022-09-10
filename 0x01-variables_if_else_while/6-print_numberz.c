#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all single digit number base 10
 *
 * Return: Always 0 (success)
 */

int main(void)
{

	int num;

	for (num = 0; < 10; num++)
		putchar((num % 10) +  '0');

	putchar('\n');

	return (0);
}
