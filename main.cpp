#include <stdio.h>
#include "string_functions.h"

int main(void)
{
	printf("Работа puts1():\n");
	puts1(STR);	
	puts1("");
	putchar('\n');
	
	printf("Работа strchr1():\n");
	printf("%p\n", strchr1(STR, 'e'));
	printf("%p\n", strchr1(STR, 'k'));
	putchar('\n');

	printf("Работа strlen1():\n");
	printf("%lu\n", strlen1(STR));
	putchar('\n');
	
	char destination1[100] = "123";
	printf("Работа strcpy1():\nНачальная строка: ");
	printf("%s\n", destination1);
	printf("Новая строка: ");
	printf("%s\n", strcpy1(destination1, STR));
	putchar('\n');

	char destination2[100] = "123";
	printf("Работа strncpy1():\nНачальная строка: ");
	printf("%s\n", destination2);
	printf("Новая строка: ");
	printf("%s\n", strncpy1(destination2, STR, 4));
	putchar('\n');

	return 0;
}
