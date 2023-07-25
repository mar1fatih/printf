#include<unistd.h>
#include "main.h"
/**
 * _putchar - write the character c
 * Return: on success 1.
 * @c: the character we r going to print
 * on error, is return -1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
