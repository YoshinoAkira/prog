#include <stdio.h>
#include <stdlib.h>

double d[10]={10.23,19.87, 1002.23,12.9,0.897,11.45,75.34,0.0,1.01,875.875};

int main(void){
	int i;
	FILE *fp;

	if((fp=fopen("myfile","wb"))==NULL){
		printf("cant open:write\n");
		exit(1);
	}
	for(i=0;i<10;i++){
		if((fwrite(&d[i],sizeof(double),1,fp))!=1){
			printf("cant write\n");
			exit(1);
		}
	}
	fclose(fp);


	if((fp = fopen("myfile","rb"))==NULL){
		printf("cant open:read\n");
		exit(1);
	}
	for(i=0;i<10;i++){
		d[i]=0.0;
	}

	for(i=0;i<10;i++){
		if((fread(&d[i],sizeof(double),1,fp))!=1){
			printf("error:read\n");
			exit(1);
		}
	}
	for(i=0;i<10;i++)
		printf("%lf\n",d[i]);

	fclose(fp);


	return 0;
}
