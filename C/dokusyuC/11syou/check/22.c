#include <stdio.h>

int main(int argc, char *argv[]){
	FILE *fp=fopen(argv[1],"r");

	char ch;
	while(!feof(fp)){
		ch = fgetc(fp);
		ch = ~ch;
		printf("%c",ch);
	}
	printf("\n");

	return 0;
}
