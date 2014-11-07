#include <stdio.h>
#include <stdlib.h>

int main(void){
	char *p;
	p = (char *)malloc(80);

	if(!p){
		printf("割り当てに失敗しました。\n");
		exit(1);
	}

	printf("文字列を入力してください。:");
	fgets(p,80,stdin);
	printf("%s",p);
	free(p);

	return 0;
}
