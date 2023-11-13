#include "main.h"
/**
*_strlen - prints length of a string
* @s: pointer to char
*Return: c
*
*/
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
/**
* _strlenc - applies to constant char pointer s
* @s: type char pointer
* Return: c
*/
int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
