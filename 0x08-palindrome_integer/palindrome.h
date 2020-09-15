#ifndef PALINDROME
#define PALINDROME
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE (sizeof(int) * 8 + 1)
char *ultoa(unsigned long n, char *str, int base);
int is_palindrome(unsigned long n);
#endif
