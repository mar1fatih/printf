#include "main.h"
int _printf(const char *format, ...)
{
	int i = 0, c = 0, n;
	va_list ptr;
	va_start(ptr, format);
	if (format == NULL || (format[0] == '%' && !format[1]))
	{
		return (-1);
	}
	if (format[0] == '%' && format[1] == ' ' && !format[2])
	{
		return (-1);
	}
	while (*(format + i) != '\0')
	{
		if (*(format + i) == '%')
		{
			i++;
			if (*(format + i) == 'd' || *(format + i) == 'i')
			{
				n = va_arg(ptr, int);
				if (n < 0)
				{
					c++;
				}
				c += num_len(n);
				num_print(n);
				i++;
			}
			else if (*(format + i) == 'b')
			{
			n = va_arg(ptr, int);
			c += d_to_bi(n);
			i++;
			}
			else
			{
				switch (*(format + i))
				{
					case ('c') :
						_putchar(va_arg(ptr, int));
						c++;
						i++;
						break;
					case ('s') :
						c += strprint(va_arg(ptr, char *));
						i++;
						break;
					case ('%'):
						_putchar('%');
						c++;
						i++;
						break;
					default :
						_putchar('%');
						c++;
						if (*(format + i))
							_putchar(*(format + i));
						c++;
						i++;
				}
			}
		}
		else
		{
			_putchar(*(format + i));
			c++;
			i++;
		}
	}
	va_end(ptr);
	return (c);
}
