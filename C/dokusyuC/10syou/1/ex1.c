#include <stdio.h>

struct s_type{
	int i;
	char ch;
	double d;
	char str[81];
}s;

int main(void){
	printf("整数を入力してください。:");
	scanf("%d",&s.i);
	rewind(stdin);
	printf("文字を入力してください:");
	scanf("%*c%c",&s.ch);
	rewind(stdin);
	printf("input float:");
	scanf("%lf",&s.d);
	rewind(stdin);
	printf("input str:");
	scanf("%80s",s.str);

	printf("%d %c %lf %s\n",s.i,s.ch,s.d,s.str);

	return 0;
}
