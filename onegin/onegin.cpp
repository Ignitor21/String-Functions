#include <stdio.h>
#include "onegin.h"

void getFromFile()
{
	int lines = 0;
	char c = 0;
	FILE* fp = fopen("onegin.txt", "r");

	c = fgetc(fp);
	while (c != EOF)
	{
		if (c == '\n')
			lines++;
		c = fgetc(fp);
	}

	printf("%d\n", lines);

	fclose(fp);

}
