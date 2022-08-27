#ifndef _string_functions_h
#define _string_functions_h

static const char* STR = "Test String!";

int puts1(const char* s);
const char* strchr1(const char* s, int symbol);
size_t strlen1(const char* s);
char* strcpy1(char* destination, const char* source);
char* strncpy1(char* destination, const char* source, size_t n);
#endif
