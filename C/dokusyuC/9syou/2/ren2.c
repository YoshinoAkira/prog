#include <stdio.h>
int main(int argc, char *argv[]){
	FILE *fp=fopen(argv[1],"rb");
	char ch;
	char alpha['Z']={0};
	char i;
	printf("%d,%d,%d\n",toupper('z'),toupper('Z'),'z');
	while((ch=fgetc(fp))!=EOF){
		for(i='A';i<='Z';i++){
			if(toupper(ch)==i){
				alpha[i]++;
			}
		}
	}

	for(i='A';i<='Z';i++){
		printf("%c ",i);		
	}
	printf("\n");
	int j;
	for(i='A';i<='Z';i++){
		printf("%d ",alpha[i]);
	}
	printf("\n");

	return 0;
}
