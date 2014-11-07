#include <stdio.h>

int main(int argc, char *argv[]){
	FILE *fp1,*fp2,*tmp;
	//fp1->tmp
	char *copy1=argv[1],*copy2=argv[2];

	fp1=fopen(copy1,"rb");
	tmp=fopen("tmpfile","wb");
	while(!feof(fp1)){
		fputc(fgetc(fp1),tmp);
	}
	fclose(fp1);
	fclose(tmp);

	fp1=fopen(copy1,"wb");
	fp2=fopen(copy2,"rb");
	while(!feof(fp2)){
		fputc(fgetc(fp2),fp1);
	}

	fclose(fp2);
	fclose(fp1);

	fp2=fopen(copy2,"wb");
	tmp=fopen("tmpfile","rb");
	while(!feof(tmp)){
		fputc(fgetc(tmp),fp2);
	}
	fclose(fp2);
	fclose(tmp);

	return 0;
}
