#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>


int _printf(const char *format, ...);
int args_c(char c);
int args_s(char *s);
void print_int(int n);
int _putchar(char c);
int count_int(int n);
int _strlen(char *s);

#endif
