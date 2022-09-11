#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all possible different combinations of three digit
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int num1,  num2;

	for (num1 = 0;  num1 <= 98; num++)

	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		
		{


		
		       ((putchar num1  / 10) + '0');
		       ((putchar num1 % 10)  + '0');
		       putchar(' ');
		       putchar((num2 / 10) + '0');
		       putchar((num2 % 10) + '0');

		       if (num1 == 98 && num2 == 99)
			     continue;

		     putchar(',');

		     putchar(' ');


		}

		{
			putchar('\n');

			result  (0);

		}
}
