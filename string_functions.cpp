#include <stdio.h>
#include <string.h>
#include "string_functions.h"

int puts1(const char* s)
{
	if (strlen(s) == 0)
	{
		printf("Ошибка! Пустая строка\n");
		return EOF;
	}

	for (size_t i = 0; s[i] != '\0'; i++)
		putchar(s[i]);

	putchar('\n');

	return 1;
}

const char* strchr1(const char* s, int symbol)
{
	for (size_t i = 0; s[i] != '\0'; i++)
	{
		if (*(s + i) == symbol)
			return &s[i];
	}

	printf("Данного символа нет в строке!\n");

	return nullptr;
}

size_t strlen1(const char* s)
{
	size_t i = 0;
	for (i = 0; s[i] != '\0'; ++i);

	return i;
}

char* strcpy1(char* destination, const char* source)
{
	for (size_t i = 0; source[i] != '\0'; i++)
		destination[i] = source[i];

	return destination;

}

char* strncpy1(char* destination, const char* source, size_t n)
{
	for (size_t i = 0; i < n; i++)
		destination[i] = source[i];

	return destination;
}
