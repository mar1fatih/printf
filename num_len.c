#include "main.h"
int num_len(int num)
{
	if (num == 0)
	{
		return (0);
	}
	return (1 + num_len(num / 10));
}
