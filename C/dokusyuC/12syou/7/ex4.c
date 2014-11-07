#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i;
	double *p;
	FILE *fp;

	p = (double *)malloc(10 * sizeof(double));
	if(!p){
		printf("error:\n");
		exit(1);
	}

	for(i=0;i<10;i++){
		p[i]=(double)rand();
	}

	fp=fopen("myfile","wb");
	fwrite(p,10*sizeof(double),1,fp);

	fclose(fp);

	free(p);

	p=(double *)malloc(10*sizeof(double));
	if(!p){
		printf("割り当てエラー\n");
		exit(1);
	}

	fp=fopen("myfile","rb");

	fread(p,sizeof(double),1,fp);
	fclose(fp);

	for(i=0;i<10;i++)
		printf("%f ",p[i]);
	free(p);
		

	return 0;
}
