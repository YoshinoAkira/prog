#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	int count=0,i;
	double d,in;
	FILE *fp;
	char str[10],ch;
	if((fp=fopen("values","w"))==NULL){
		printf("cant open:write\n");
		exit(1);
	}

	while(1){
		printf("double値を入力してください。\n(enterだけで終了)");
		fgets(str,10,stdin);
		if(str[0]=='\n'){
			break;
		}
		str[strlen(str)-1]='\0';
		d = atof(str);
		if(fwrite(&d,sizeof(double),1,fp)!=1){
			printf("error:write\n");
			exit(1);
		}
		count++;
	}

	printf("number of numbers input:%d\n",count);
	
	fclose(fp);

	if((fp=fopen("values","r"))==NULL){
		printf("cant open:read\n");
		exit(1);
	}
	double out;
	for(i=0;i<count;i++){
		if(fread(&out,sizeof(double),1,fp)!=1){
			printf("error:read\n");
			exit(1);
		}
		printf("%lf\n",out);
	}

	printf("終わり\n");
	fclose(fp);

	return 0;
}
