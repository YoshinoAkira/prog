#include <stdio.h>

int main(int argc, char *argv[]){
	FILE *fp;
	int i;

	fp=fopen("rand","rb");
	while(!feof(fp)){
		fread(&i,sizeof(int),1,fp);
		printf("%d ",i);
	}
	printf("\n");

	return 0;
}
