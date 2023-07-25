#include "main.h"
int strprint(char *str)
{
    int c = 0, i;
        if (str == NULL)
    {
           return(strprint("(null)"));
    }
    for (i = 0; *(str + i) != '\0'; i++)
      {
       _putchar(*(str + i));
       c++;
    }
     return (c);
}
