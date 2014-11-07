#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	long loc;
	FILE *in, *out;
	char ch;
	
	if(argc!=3){
		printf("how to use: <><><>\n");
		exit(1);
	}

	if((in=fopen(argv[1],"rb"))==NULL){
		printf("cant open:read\n");
		exit(1);
	}
	if((out=fopen(argv[2],"wb"))==NULL){
		printf("cant open:write");
		exit(1);
	}

	fseek(in, 0L, SEEK_END);
	loc = ftell(in);
	printf("%ld\n",loc);
	loc--;
	while(loc >= 0L){
		fseek(in,loc,SEEK_SET);
		ch = fgetc(in);
		fputc(ch,out);
		loc--;
	}
	fclose(in);
	fclose(out);

	return 0;
}
