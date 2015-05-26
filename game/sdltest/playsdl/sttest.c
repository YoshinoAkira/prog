#include <stdio.h>

typedef struct{
	int a;
	float b;
	char c;
}hoge;

int main(){
	hoge hogehoge={3,10.5,'a'};
	printf("%d\n",hogehoge.a);
	printf("%f\n",hogehoge.b);
	printf("%c\n",hogehoge.c);
	return 0;
}
