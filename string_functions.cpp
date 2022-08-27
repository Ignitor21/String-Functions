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

	for (size_t i = 0; i < strlen(s); i++)
		putchar(s[i]);
	putchar('\n');
	return strlen(s);
}

const char* strchr1(const char* s, int symbol)
{
	for (size_t i = 0; i < strlen(s); i++)
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
