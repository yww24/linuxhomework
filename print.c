#include <stdio.h>


int printfile(char filename[30])
{
	char buffer[20];
	FILE *fp = fopen(filename,"r");

	fread(buffer, sizeof(buffer), 1,fp);

	printf("%s\n", buffer);

	fclose(fp);
	return 0;
}

	
