#include <stdio.h>
#include <ctype.h>
int main(int argc, char *argv[]){
	FILE *fp;
	char str[80];

	fp=fopen(argv[1],"rb");

	while(!feof(fp)){
		fgets(str,79,fp);
		if(!feof(fp)){
			printf("%s",str);
		}
		printf("続行しますか？:");
		if(toupper(getchar())=='N')
			break;
		printf("\n");
	}
	fclose(fp);
		
	return 0;
}
