#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	FILE *fp;
	char str[80];

	fp=fopen(argv[1],"wb");

	printf("終了するには空白行を入力してください。\n");
	do{
		fgets(str,80,stdin);
//		str[strlen(str)-1]='\0';
		if(*str!='\n'){
			fputs(str,fp);
		}
	}while(*str!='\n');
	fclose(fp);
	
	fp=fopen(argv[1],"rb");
	while(!feof(fp)){
		fgets(str,80,fp);
		printf("%s",str);
		if(feof(fp)){
			break;
		}
	}
	fclose(fp);

	return 0;
}
