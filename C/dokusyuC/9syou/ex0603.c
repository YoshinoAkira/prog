#include <stdio.h>
#include <stdlib.h>

double d[10]={
	10.23, 19.87, 1002.23, 12.9, 0.897,
	11.45, 75.34, 0.0, 1.01, 875.875,
};

int main(void){
	long loc;
	double value;
	FILE *fp;
	if((fp=fopen("myfile2","wb"))==NULL){
		printf("cant open:write\n");
		exit(1);
	}


	if(fwrite(d,sizeof d,1,fp)!=1){
		printf("書き込みエラー\n");
		exit(1);
	}
	fclose(fp);


	if((fp=fopen("myfile2","rb"))==NULL){
		printf("cant open:read\n");
		exit(1);
	}

	printf("何番目の要素を表示しますか？:");
	scanf("%ld",&loc);
	if(fseek(fp, loc*sizeof(double),SEEK_SET)){
		printf("seek error\n");
		exit(1);
	}

	fread(&value, sizeof(double),1,fp);
	printf("要素 %ld は %f です。",loc, value);

	fclose(fp);

	return 0;
}
