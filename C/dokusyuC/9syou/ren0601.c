#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	FILE *fp;
	char ch,loc;
	long int i,l;
	
	if(argc!=2){
		printf("how to use <prog><file>\n");
		exit(1);
	}

	if((fp=fopen(argv[1],"rb"))==NULL){
		printf("cant open:read\n");
		exit(1);
	}

	fseek(fp,0,SEEK_END);
	l=ftell(fp);
		
	fseek(fp,0,SEEK_SET);
	for(; l>=0;l=l-1L){
		printf("%ld ",l);
		ch = fgetc(fp);
		putchar(ch);
		fseek(fp,0L,SEEK_CUR);
		printf("%ld \n\n",l);
	}
	fclose(fp);

	

	return 0;
}
