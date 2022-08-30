#include <stdio.h>
#include <string.h>
#include "string_functions.h"

int puts1(const char* s)
{
	if (*s == '\0')
		return EOF;

	//while (*s != '\0') {
    //	putchar(*s++);
	// }

	for (size_t i = 0; s[i] != '\0'; i++)
		putchar(s[i]);

	putchar('\n');

	return 1;
}

const char* strchr1(const char* s, char symbol)
{
	while (*s++ != symbol && *s != '\0');
	return (*s == '\0') ? (nullptr) : (s);
}

size_t strlen1(const char* s)
{
	size_t i = 0;
	for (i = 0; s[i] != '\0'; ++i);

	return i;
}

char* strcpy1(char* destination, const char* source)
{
	char* destination_start = destination;
	while (*source != '\0')
	{
		*destination++ = *source++;
	}
	return destination_start;

}

char* strncpy1(char* destination, const char* source, size_t n)
{
	char* destination_start = destination;
	while (n--)	
		*destination++ = *source++;

	return destination_start;
}

char* strcat1(char* destination, const char* source)
{	
	size_t destination_len = strlen1(destination);
	size_t source_len = strlen1(source);
	size_t i = destination_len;
	size_t j = 0;
//pointer arith
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
//!
	for (i = destination_len, j = 0; i < destination_len + n; i++, j++)
	{
		destination[i] = source[j];
	}

	destination[i] = '\0';

	return destination;
}

int strcmp1(const char* s1, const char* s2)
{

	// while *s1 == *s2 && *s1 != '\0' && *s2 != '\0':
	//  ++s1;
	//  ++s2;

	//return *s1 = *s2;
	while (true)
	{

	if (*s1++ != *s2++)
		return (*(--s1) - *(--s2));

	if (*s1 == '\0' || *s2 == '\0')
		return 0;
	}	
}

/*
void getStringsFromFile()
{	
	numberOfStrings = 0; //!
	FILE* fp = fopen("example.txt", "r");
	fscanf(fp, "%d", &numberOfStrings);

	//malloc, calloc, free
	char* strings[numberOfStrings] = {0};

	for (int i = 0; i < numberOfStrings; i++)
}
*/
