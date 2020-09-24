#include <stdio.h>

int wc(char filename[30])
{
	
	int ch = 0;
	int lin = 0;
	int wrd = 0;
	int c;

	FILE *fp = fopen(filename,"r");
	if (fp == NULL){
		perror("Open File Error");
	}
	else{
		while(1){
			c = getc(fp);
			if(c == EOF){
				break;
			}
			if(c == '\n'){
				lin++;
				wrd++;
			}
			else if(c == ' '){
				wrd++;
			}
			ch++;
		}
	}
	fclose(fp);

	
	printf("문자의 갯수:%d\n", ch);
	printf("단어의 갯수%d\n",wrd);
	printf("줄의 갯수%d\n",lin);
	
	return 0;
}
