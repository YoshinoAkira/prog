#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	FILE *fp;
	double ld;
	int d;
	char str[80];

	fp=fopen(argv[1],"wb");
	fprintf(fp,"%f %d %s\n",12345.342,1908, "hello");
	fprintf(fp,"%s","world");
	fclose(fp);

	fp=fopen(argv[1],"rb");
	fscanf(fp,"%lf %d %s",&ld,&d,str);
	printf("%f %d %s",ld,d,str);
	fclose(fp);

	return 0;
}
