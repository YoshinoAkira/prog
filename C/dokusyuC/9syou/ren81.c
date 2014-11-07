#include <stdio.h>

int main(void){
	char ch;
	while(!feof(stdin)){
		scanf("%c",&ch);
		if(!feof(stdin))
			printf("%c",ch);
	}
	return 0;
}
