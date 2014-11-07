#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	FILE *fp;
	char ch;
	int count=0;
	fp=fopen(argv[1],"rb");
	while(!feof(fp)){
		fgetc(fp);
		count++;
	}
	fclose(fp);
	printf("%d\n",count);


	return 0;
}
