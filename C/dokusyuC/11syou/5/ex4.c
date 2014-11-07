#include <stdio.h>
int main(void){
	short i;
	printf("数字を入力してください:");
	scanf("%hd", &i);

	if(i & 32768)
		printf("負の数\n");

	return 0;
}
