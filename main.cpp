#include <stdio.h>
#include "string_functions.h"

int main(void)
{
	char source[100] = "123";
	puts1(STR);	
	puts1("");

	printf("%p\n", strchr1(STR, 'e'));
	printf("%p\n", strchr1(STR, 'k'));

	printf("%lu\n", strlen1(STR));

	printf("%s\n", strcpy1(source, STR));


	return 0;
}
