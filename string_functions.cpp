#include <stdio.h>
#include <string.h>
#include "string_functions.h"

int puts1(const char* s)
{
	if (*s == '\0')
	{
		printf("Ошибка! Пустая строка\n");
		return EOF;
	}

	for (size_t i = 0; s[i] != '\0'; i++)
		putchar(s[i]);

	putchar('\n');

	return 1;
}

const char* strchr1(const char* s, char symbol)
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

char* strcat1(char* destination, const char* source)
{	
	size_t destination_len = strlen1(destination);
	size_t source_len = strlen1(source);
	size_t i = destination_len;
	size_t j = 0;

	for (i = destination_len, j = 0; i < destination_len + source_len; i++, j++)
	{
		destination[i] = source[j];
	}

	destination[i] = '\0';

	return destination;

}

char* strncat1(char* destination, const char* source, size_t n)
{
	size_t destination_len = strlen1(destination);
	size_t i = destination_len;
	size_t j = 0;

	for (i = destination_len, j = 0; i < destination_len + n; i++, j++)
	{
		destination[i] = source[j];
	}

	destination[i] = '\0';

	return destination;
}

int strcmp1(const char* s1, const char* s2)
{
	int len1 = strlen1(s1);
	int len2 = strlen1(s2);

	return (len1 - len2);
}

//void getStringsFromFile()
//{	
//	numberOfStrings = 0;
//	FILE* fp = NULL;
//	fp = fopen("example.txt", "r");
//	fscanf(fp, "%d", &numberOfStrings);

//	char* strings[numberOfStrings] = {0};

//	for (int i = 0; i < numberOfStrings; i++)
	
			


//}
