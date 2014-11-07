#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	FILE *fp;
	unsigned char ch,val;

	if(argc!=3){
		 printf("how to use:\n");
		 exit(1);
	}
	
	if((fp=fopen(argv[1],"r"))==NULL){
		 printf("ファイルを開くことができません\n");
		 exit(1);
	}
	val = atoi(argv[2]);

	while(!feof(fp)){
		 ch = fgetc(fp);
		if(ch == val){
			printf("%ld のアドレスに値が見つかりました。\n",ftell(fp));
		}

	}
	fclose(fp);
	

	return 0;
}
