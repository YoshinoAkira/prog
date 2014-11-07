#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	FILE *fp;
	int i;
	long loc;
	char ch;
	if(argc!=3){
		printf("error:\n");
		exit(1);		
	}

	if((fp=fopen(argv[1],"rb"))==NULL){
		 printf("cant open\n");
		 exit(1);
	}
	while(!feof(fp)){
		loc = ftell(fp);
		ch=fgetc(fp);
		printf("%ld,%c\n",loc,ch);
		if(atoi(argv[2])==ch){
			  printf("%dが見つかりました。\n",atoi(argv[2]));
			  printf("%ldバイト目です。\n",loc);
			  break;
		}
	}
	return 0;
}
