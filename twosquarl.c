#include "main.h"
/***/

unsigned long int twosquarl(int a)
{
	unsigned long int i = 1;
	int j = 2;
	while (a > 0)
	{
		i = i * j;
		a--;
	}
	return (i);
}
