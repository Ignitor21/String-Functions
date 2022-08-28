#ifndef _string_functions_h
#define _string_functions_h

int puts1(const char* s);
const char* strchr1(const char* s, char symbol);
size_t strlen1(const char* s);
char* strcpy1(char* destination, const char* source);
char* strncpy1(char* destination, const char* source, size_t n);
char* strcat1(char* destination, const char* source);
int strcmp1(const char* s1, const char* s2);
char* strncat1(char* destination, const char* source, size_t n);
#endif
