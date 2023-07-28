#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
#include <unistd.h>
int strprint(char *str);
int num_len(int num);
int num_print(int num);
int _printf(const char *format, ...);
int _putchar(char c);
int d_to_bi(unsigned int num);
unsigned long int twosquarl(int a);
#endif
