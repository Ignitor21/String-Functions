#include <stdio.h>
#include "string_functions.h"

int main(void)
{
	puts1(STR);	
	puts1("");

	printf("%p\n", strchr1(STR, 'e'));
	printf("%p\n", strchr1(STR, 'k'));
	printf("%lu", strlen1(STR));

	return 0;
}
