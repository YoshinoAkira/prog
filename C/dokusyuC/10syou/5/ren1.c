#include <stdio.h>

int main(void){
	FILE *fp;


	union test{
		double d;
		char c[sizeof(double)];

	}ren;

	ren.d=12343.43243;

	printf("%lf,%ld\n",ren.d,sizeof(double));
	int i;

	fp=fopen("myfile","wb");
	for(i=0;i<sizeof(double);i++){
		printf("%c ",ren.c[i]);
//		fwrite(&ren.c[i],sizeof(char),1,fp);
		fputc(ren.c[i],fp);
	}
	printf("last\n");
	fclose(fp);

	fp=fopen("myfile","rb");
	union test ren2;
	char ch;
	for(i=0;i<sizeof(double);i++){
		ch = fgetc(fp);
		ren2.c[i]=ch;
		printf("%c",ch);
	}
	printf("\n");
	printf("%lf\n",ren2.d);
	

	return 0;
}

