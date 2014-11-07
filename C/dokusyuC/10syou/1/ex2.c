#include <stdio.h>

struct s_type{
	int i;
	char ch;
	int *p;
	double d;
}s;

int main(void){
	printf("s_type %lu バイトの長さです。\n",sizeof(struct s_type));
	return 0;
}
