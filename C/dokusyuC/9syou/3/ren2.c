#include <stdio.h>

int main(int argc, char *argv[]){
	FILE *fp1,*fp2;
	//fp1->tmp
	char str[]=argv[1];
	
	fp1=fopen(str,"rb");
	printf("%c\n",fgetc(fp1));

	fclose(fp1);

	return 0;
}
