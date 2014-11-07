#include <stdio.h>

int main(void){
	FILE *fp=fopen("pre2","wb");
	fprintf(fp,"%s %lf %X %c\n","これは文字列です。",1230.23,0x1FFFF,'A');

	fclose(fp);
	return 0;
}
