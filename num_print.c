#include "main.h"
int num_print(int num)
{
	if (num == -2147483648)
	{
		putchar('-');
		putchar('2');
		num_print(147483648);
		return (1);
	}
	else if (num < 0)
	{
		putchar('-');
		num = -num;
	}
	if (num >= 10)
	{
		num_print(num / 10);
		num_print(num % 10);
	}
	else if (num < 10)
	{
		putchar(num + '0');
	}
	return (1);
}
