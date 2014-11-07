#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	FILE *fp;
	char ch;
	fp=fopen(argv[1],"rb");
	while((ch=fgetc(fp))!=EOF){
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}
