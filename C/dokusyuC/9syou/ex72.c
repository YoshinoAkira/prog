#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	FILE *fp;

	if(argc!=2){
		printf("input file name\n");
		exit(1);
	}

	if((fp=fopen(argv[1],"r"))==NULL){
		 printf("cant open\n");
		 exit(1);
	}

	printf("%ld\n",ftell(fp));
	while(!feof(fp)){
		 putchar(getc(fp));
	}

	rewind(fp);
	printf("%ld\n",ftell(fp));

	while(!feof(fp)){
		 putchar(getc(fp));
	}

	fclose(fp);

	return 0;
}
