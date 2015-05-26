#include <stdio.h>

int main(){
	char c = 0;

	printf("数字 : 文字\n");
	for(int i=0;i<70;i++){
		printf("%d  :  %c\n",c++,c);
	}
	return 0;
}
