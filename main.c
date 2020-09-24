#include <stdio.h>
#include "main.h"


int main(int argc,char* argv[]){
	int i;
	char* filename;

	filename = argv[1];
	printfile(filename);
	wc(filename);
	
	return 0;
}

