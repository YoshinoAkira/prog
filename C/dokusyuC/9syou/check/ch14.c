#include <stdio.h>
int main(int argc, char *argv[]){
	FILE *fp;
	int i;
	
	fp=fopen("rand","wb");

	int k;
	for(k=0;k<100;k++){
		i=rand();
		printf("%d ",i);
		fwrite(&i,sizeof(int),1,fp);
	}
	fclose(fp);

	return 0;
}

