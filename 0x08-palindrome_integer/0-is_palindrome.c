#include <stdlib.h>
#include "palindrome.h"

/**
 * rev_string - entry point
 * @s: string
 * Description: prints a string, followed by a new line, to stdout.
 * Return: void
 */
void rev_string(char *s)
{
	int longitud = 0, izq, der;
	char temp;

	while (s[longitud] != '\0')
	{
		longitud++;
	}

	for (izq = 0, der = longitud - 1 ; izq < (longitud / 2); izq++, der--)
	{
		temp = s[izq];
		s[izq] = s[der];
		s[der] = temp;
	}
}

/**
 * ultoa - convert unsigned long to string
 * @num: unsigned long
 * @str: string returned
 * @base: numerical base to represent nukber
 * Description: convert unsigned long to string
 * Return: number as string
 */
char *ultoa(unsigned long num, char *str, int base)
{
	int i = 0;
	int isNegative = 0;

    /* Handle 0 explicitely, otherwise empty string is printed for 0 */
	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}

	/*if (num < 0 && base == 10)*/
	/*{*/
	/*	isNegative = 1;*/
	/*	num = -num;*/
	/*}*/
	/*num = abs(num);*/
	/*Process individual digits*/
	while (num != 0)
	{
		int rem = num % base;

		str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
		num = num / base;
	}

	/*If number is negative, append '-'*/
	if (isNegative)
		str[i++] = '-';

	/*Append string terminator*/
	str[i] = '\0';

	/*Reverse the string*/
	rev_string(str);

	return (str);
}

/**
* is_palindrome - checks if unsigned integer is a palindrome.
* @n: number to convert
* description: checks whether or not a given unsigned integer is a palindrome.
* Return: 1 if palindrome 0 If not.
*/
int is_palindrome(unsigned long n)
{
	char num[100];
	int i, len = 0;
	/*convert to string*/
	ultoa(n, num, 10);
	len = strlen(num);
	/*printf("length number: %d\n", len);*/
	/*printf("number: %s\n", num);*/
	if (len == 1)
		return (1);

	for (i = 0 ; i < len / 2 ; i++, len--)
	{
		if (num[i] != num[len - 1])
			return (0);
	}
	return (1);
}
