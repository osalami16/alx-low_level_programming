#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *main - entry point
 *
 *Description:print last digit in random number
 * 
 *Return: Always 0 (success)
 */

int main(void)

{
	int n, lastdigit;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	 
	lastdigit = n % 10;


	if (last > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n. lastdigit);
	else if (lastdigit ==  0)
	printf("las digit of %d is %d and is o or 0\n", n, last)
	else if (last < 6 && last != 0)
	olkmprint ("lastdigit of %d is %d and is less than 6 and not 0\n', n, lastdigit);

	return(0);
}
