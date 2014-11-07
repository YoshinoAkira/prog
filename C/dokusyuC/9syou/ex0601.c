#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	long loc;
	FILE *fp;


	if(argc!=2){
		printf("error\n");
		exit(1);
	}

	if((fp=fopen(argv[1],"rb"))==NULL){
		printf("cant open file:read\n");
		exit(1);
	}
	
	printf("何バイト目をシークするか入力してください。:");
	scanf("%ld",&loc);
	if(fseek(fp,loc,SEEK_SET)){
		printf("seek error:\n");
		exit(1);
	}
	printf("ftell=%ld\n",ftell(fp));

	printf("%ld バイト目の値は %c です。",loc, getc(fp));
	fclose(fp);

	return 0;
	
}
