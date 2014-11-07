#include <stdio.h>
#include <stdlib.h>
int main(void){
	FILE *fp;
	int i;

	if((fp=fopen("myfile","wb"))==NULL){
		printf("cant open this file\n");
		exit(1);
	}
	i=100;
	
	if(fwrite(&i,4,1,fp)!=1){
		printf("error:write\n");
		exit(1);
	}
	fclose(fp);

	if((fp=fopen("myfile","rb"))==NULL){
		printf("cant open this file:read\n");
		exit(1);
	}
	int d=0;

	if((fread(&d,4,1,fp))!=1){
		printf("error:read\n");
		exit(1);
	}
	fclose(fp);

	printf("iは%d。dは%d\n",i,d);
	return 0;
}
