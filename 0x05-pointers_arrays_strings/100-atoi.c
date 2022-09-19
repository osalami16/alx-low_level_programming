#include "main.h"

/**
* _atoi -> Convert a tring to an integer
*@s: The pointer to convert
*
*Return: An integer
*/

int _atoi(char *s)
{
int c = 0;
unsigned int ni = 0;
int min = 1;
int isi = 0;

while (s[c])
{
if (s[c] == 45)
{
min *= -1;
}

if (isi == 1)
{
break;
}

c++;
}

ni *= min;
return (ni);
}
