#include <stdio.h>

int main(void){
	FILE *fp;
	long int li,search;
	int i,search2;
	
	printf("input seek:");
	scanf("%ld",&search);

	fp=fopen("rand","rb");
	printf("a\n");
	fseek(fp,search*sizeof(int),SEEK_SET);
	printf("b\n");
	fread(&i,sizeof(int),1,fp);
	printf("c\n");
	printf("%d\n",i);

	return 0;


}
