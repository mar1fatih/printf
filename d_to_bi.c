#include "main.h"
/***/
int d_to_bi(unsigned int num)
{
	int len = 32;
	int i,c, count;
	unsigned long int sqr;
	count = 0;
	c = len;
	sqr = twosquarl(len);
	for (i = 0; i < c; i++)
	{
		if (num >= sqr)
		{
			for (i = 0; i <= len; i++)
			{
				if (num >= sqr)
				{
					_putchar('1');
					count++;
					num = num - sqr;
					sqr = sqr / 2;
				}
				else
				{
					_putchar('0');
					count++;
					sqr = sqr / 2;
				}
			}
			return(count);
		}
		len--;
		sqr = sqr / 2;
	}
	if (num == 1)
	{
		_putchar ('1');
		count++;
		return(count);
	}
	else
	{
		_putchar ('0');
		count++;
		return(count);
	}
}
